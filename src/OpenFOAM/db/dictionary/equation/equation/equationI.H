/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | Copyright held by original author
     \\/     M anipulation  |
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software; you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by the
    Free Software Foundation; either version 2 of the License, or (at your
    option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM; if not, write to the Free Software Foundation,
    Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

\*---------------------------------------------------------------------------*/


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

inline const word& equation::equationName() const
{
    return equationName_;
}


inline word& equation::equationName()
{
    return equationName_;
}


inline const string& equation::rawText() const
{
    return rawText_;
}


inline string& equation::rawText()
{
    return rawText_;
}


inline const dimensionedScalar& equation::lastResult() const
{
    return lastResult_;
}


inline dimensionedScalar& equation::lastResult()
{
    return lastResult_;
}


inline const equationOperationList& equation::ops() const
{
    const equationOperationList& oplist(*this);
    return oplist;
}

inline equationOperationList& equation::ops()
{
    equationOperationList& opList(*this);
    return opList;
}

/*inline const scalarList * equation::internalScalars() const
{
    return internalScalars_;
}

inline scalarList * equation::internalScalars()
{
    return internalScalars_;
}*/

/*inline const wordList& equation::dictLookups() const
{
    return dictLookups_;
}

inline wordList& equation::dictLookups()
{
    return dictLookups_;
}*/

inline const dimensionSet& equation::overrideDimensions() const
{
    return overrideDimensions_;
}


inline dimensionSet& equation::overrideDimensions()
{
    return overrideDimensions_;
}


inline const bool& equation::changeDimensions() const
{
    return changeDimensions_;
}


inline bool& equation::changeDimensions()
{
    return changeDimensions_;
}

} // End namespace Foam

// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //
