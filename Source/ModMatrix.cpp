/*
  ==============================================================================

    ModMatrix.cpp
    Created: 10 Dec 2016 10:18:41am
    Author:  Matthias Pueski

  ==============================================================================
*/

#include "ModMatrix.h"

ModMatrix::ModMatrix(double sampleRate, Model* m) {
    this->modSources = new std::map<int,String>();
    this->modTargets = new std::map<int,String>();
    this->sampleRate = sampleRate;
    this->model = m;
}

ModMatrix::~ModMatrix() {
	
	
    for(std::vector<Modulation*>::iterator it = modulations.begin(); it != modulations.end(); ++it) {
        delete *it;
    }
	
	
    modSources->clear();
    modTargets->clear();
    delete modSources;
    delete modTargets;
    delete config;
}

void ModMatrix::process() {
    for (int i = 0; i < modulations.size();i++) {
        if (this->modulations.at(i)->isEnabled()) {
            this->modulations.at(i)->process();
        }
    }
}

void ModMatrix::addModulation(Modulation *mod) {
    this->modulations.push_back(mod);
}

vector<Modulation*> ModMatrix::getModulations() {
    return modulations;
}

void ModMatrix::registerSource(String source, int id) {
    this->modSources->insert(std::make_pair(id,source));
}

void ModMatrix::registerTarget(String target, int id) {
    this->modTargets->insert(std::make_pair(id,target));
}

map<int,String>* ModMatrix::getSources() {
    return this->modSources;
}

map<int,String>* ModMatrix::getTargets() {
    return this->modTargets;
}

double ModMatrix::getSampleRate(){
    return this->sampleRate;
}

Model* ModMatrix::getModel() {
    return this->model;
}

void ModMatrix::setConfig(ModMatrixConfig * config)
{
    if (this->config != NULL) {
        delete this->config;
    }
    
	this->config = config;

	this->modulations.clear();
	
	for (int i = 0; i < config->getNumConfigs();i++) {
		ModSlotConfig* msc = config->getSlotConfig(i);

		Modulation* mod = new Modulation();
		this->modulations.push_back(mod);

		mod->setEnabled(msc->isSlotEnabled());

		if (msc->getSourceId() == 1) {
			modulations.at(i)->setModulator(NULL);
		}
		// LFO 1
		else if (msc->getSourceId() == 2) {
			modulations.at(i)->setModulator(model->getLfo1());
		}
		// LFO 2
		else if (msc->getSourceId() == 3) {
			modulations.at(i)->setModulator(model->getLfo2());
		}
		else if (msc->getSourceId() == 4) {
			modulations.at(i)->setModulator(model->getModEnvelopes().at(0));
		}
		else if (msc->getSourceId() == 5) {
			modulations.at(i)->setModulator(model->getModEnvelopes().at(1));
		}
		else if (msc->getSourceId() == 6) {
			modulations.at(i)->setModulator(model->getModEnvelopes().at(2));
		}
		else if (msc->getSourceId() == 7) {
			modulations.at(i)->setModulator(model->getSequencer());
		}			


		// Filter envelope
		if (msc->getTargetId1() == 2) {

			ModTarget* target = model->getFilter();

			if (modulations.at(i)->getTargets().size() >= 1) {
				modulations.at(i)->getTargets()[0] = target;
			}
			else {
				modulations.at(i)->addTarget(target);
			}

			target->setModulator(modulations.at(i)->getModulator());
			target->setModAmount(msc->getAmount1());
		}
		// Osc 1 Pitch
		if (msc->getTargetId1() == 3) {

			modulations.at(i)->getTargets().clear();

			for (int i = 0; i < model->getVoices().size(); i++) {
				model->getVoices().at(i)->setModAmount(msc->getAmount1());
				MultimodeOscillator* m = static_cast<MultimodeOscillator*>(model->getVoices().at(i)->getOscillator(0));
				m->setModulator(modulations.at(i)->getModulator());
				m->setModAmount(msc->getAmount1());
				modulations.at(i)->addTarget(m);
			}

		}
		// Osc 2 Pitch
		if (msc->getTargetId1() == 4) {

			modulations.at(i)->getTargets().clear();

			for (int i = 0; i < model->getVoices().size(); i++) {
				model->getVoices().at(i)->setModAmount(msc->getAmount1());
				MultimodeOscillator* m = static_cast<MultimodeOscillator*>(model->getVoices().at(i)->getOscillator(1));
				m->setModulator(modulations.at(i)->getModulator());
				m->setModAmount(msc->getAmount1());
				modulations.at(i)->addTarget(m);
			}

		}
		// Osc 3 Pitch
		if (msc->getTargetId1() == 5) {

			modulations.at(i)->getTargets().clear();

			for (int i = 0; i < model->getVoices().size(); i++) {
				model->getVoices().at(i)->setModAmount(msc->getAmount1());
				MultimodeOscillator* m = static_cast<MultimodeOscillator*>(model->getVoices().at(i)->getOscillator(2));
				m->setModulator(modulations.at(i)->getModulator());
				m->setModAmount(msc->getAmount1());
				modulations.at(i)->addTarget(m);
			
			}

		}

	}

	sendChangeMessage();

}

ModMatrixConfig * ModMatrix::getConfiguration()
{
	return this->config;
}

void ModMatrix::createDefaultConfig()
{
	ModMatrixConfig* mmc = new ModMatrixConfig();

	for (int i = 0; i < 6;i++) {

		ModSlotConfig* msc = new ModSlotConfig();

		msc->setAmount1(0);
		msc->setAmount2(0);
		msc->setSourceId(1);
		msc->setTargetId1(1);
		msc->setTargetId2(1);
		msc->setEnabled(false);

		mmc->addConfig(msc);

	}

	setConfig(mmc);

}
