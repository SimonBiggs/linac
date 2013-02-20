//////////////////////////////////////////////////////////////////////////
// License & Copyright
// ===================
// 
// Copyright 2012 Christopher M Poole <mail@christopherpoole.net>
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//////////////////////////////////////////////////////////////////////////


#include "StopKillShield.hh"

// GEANT4 //
#include "G4ThreeVector.hh"
#include "G4SDManager.hh"


StopKillSheild::StopKillSheild(G4String name):G4VSensitiveDetector(name)
{
}


StopKillSheild::~StopKillSheild()
{
}


void StopKillSheild::Initialize(G4HCofThisEvent* HCE)
{
}


G4bool StopKillSheild::ProcessHits(G4Step* aStep,G4TouchableHistory*)
{
    aStep->GetTrack()->SetTrackStatus(fStopAndKill);
    return true;
}

void StopKillSheild::EndOfEvent(G4HCofThisEvent*){

}
