/////////////////////////////////////////////////////////////////////////
//
// Merlin C++ Class Library for Charged Particle Accelerator Simulations
//  
// Class library version 5.01 (2015)
// 
// Copyright: see Merlin/copyright.txt
//
// Created:		2010	 RJB
// Modified:	08.01.15 Haroon Rafique		
// Last Edited: 20.07.15 HR
// 
/////////////////////////////////////////////////////////////////////////
#ifndef CollimateProtonProcess_h
#define CollimateProtonProcess_h 1

#include <iostream>
#include <vector>

#include "Collimators/CollimateParticleProcess.h"
#include "Collimators/Dustbin.h"

using namespace std;
namespace ParticleTracking {


class CollimateProtonProcess : public CollimateParticleProcess {
public:

    //	Constructor taking the collimation mode, and the output
    //	stream pointer to which to print the results. mode can
    //	be a logical OR combination of the collimation modes. A
    //	null pointer for osp (default) suppresses output.
    CollimateProtonProcess (int priority, int mode, std::ostream* osp = 0);

	void SetDustbin (Dustbin& odb){outputdustbin = &odb;}
	
	// Dustbin object to hold output data
	Dustbin* outputdustbin;

private:

    //bool DoScatter(Particle&);

};

}; // end namespace ParticleTracking

#endif
