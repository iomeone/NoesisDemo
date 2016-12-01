#include "pch.h"
#include "NsManager.h"
#include "MySeecond.h"

NsManager* NsManager::singleton = 0;
NsManager::NsManager(){
	
}

NsManager::~NsManager(){

}

NsManager* NsManager::getSingleton(){
	if (singleton == NULL){
		singleton = new NsManager();
	}
	return singleton;
}

void NsManager::NsRegisterReflection(bool registerComponents)
{
	NS_REGISTER_COMPONENT(MySeecond)
}