/*---------------------------------------------------------------------------*\
kristjan modified: OpenFOAM-3.0.0/src/thermophysicalModels/basic/rhoThermo/rhoThermos.C
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | Copyright (C) 2011-2014 OpenFOAM Foundation
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/

#include "mojRhoThermo.H"
#include "mojMakeThermo.H"

#include "specie.H"
#include "perfectGas.H"
#include "incompressiblePerfectGas.H"
#include "rhoConst.H"
#include "perfectFluid.H"
#include "PengRobinsonGas.H"
#include "adiabaticPerfectFluid.H"

#include "hConstThermo.H"
#include "janafThermo.H"
#include "sensibleEnthalpy.H"
#include "sensibleInternalEnergy.H"
#include "thermo.H"

#include "constTransport.H"
#include "mojConstTransport.H"
#include "sutherlandTransport.H"
#include "polymerPVT.H"
#include "crossWLFTransport.H"

#include "icoPolynomial.H"
#include "hPolynomialThermo.H"
#include "polynomialTransport.H"


#include "heRhoThermo.H"
#include "mojHeRhoThermo.H"
#include "pureMixture.H"

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

/* * * * * * * * * * * * * * * private static data * * * * * * * * * * * * * */



mojMakeThermo
(
    mojRhoThermo,
    mojHeRhoThermo,
    pureMixture,
    mojConstTransport,
    sensibleInternalEnergy,
    hConstThermo,
    perfectGas,
    specie
);

mojMakeThermo
(
    mojRhoThermo,
    mojHeRhoThermo,
    pureMixture,
    mojConstTransport,
    sensibleInternalEnergy,
    hConstThermo,
    polymerPVT,
    specie
);

mojMakeThermo
(
    mojRhoThermo,
    mojHeRhoThermo,
    pureMixture,
    mojConstTransport,
    sensibleInternalEnergy,
    hConstThermo,
    perfectFluid,
    specie
);

mojMakeThermo
(
    mojRhoThermo,
    mojHeRhoThermo,
    pureMixture,
    crossWLFTransport,
    sensibleInternalEnergy,
    hConstThermo,
    polymerPVT,
    specie
);

mojMakeThermo
(
    mojRhoThermo,
    mojHeRhoThermo,
    pureMixture,
    crossWLFTransport,
    sensibleInternalEnergy,
    hPolynomialThermo,
    polymerPVT,
    specie
);


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// ************************************************************************* //
