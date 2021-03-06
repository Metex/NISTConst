# NISTConst
NISTConst is a header only C/C++ constants library for physics and chemistry. It contains a total of 335 constants compiled by the [National Institute of Standards and Technology (NIST)](https://www.nist.gov/) as well as their associated uncertainties. 

## About
This library provides access to the current set of basic constants and conversion factors for physics and chemistry recommended by the [Committee on Data for Science and Technology (CODATA)](http://www.codata.org/) for international use. 

The data was compiled from the [Physical Measurement Laboratory of NIST](https://physics.nist.gov/cuu/Constants/). Currently NISTConst is based off of the 2014 CODATA recommended values.

## Documentation

All constants are fully documented. You can read the documentation [HERE](https://DrGrafil.github.io/NISTConst/html/modules.html). If the variable names and units are not displaying correctly, downloading the doc foldering and viewing it usually solves the issue.  

## Setup

NISTConst is a header-only library, and therfore does not need to be compiled. All that needs to be done is copy the NISTConst folder to your include directories and add `#include <NISTConst/NISTConst.hpp>`. 

### Additional Options

By default NISTConst doesn't set the uncertainties associated with all the constants. To add these uncertainties to your program you need to add `#define NISTCONST_UNCERTAINTY` before you include NISTConst. All uncertainties are accessed by just adding `Uncertainty` to a the variable name. For example the uncertainty in the planck constant, `PlanckConstant`, is simply `PlanckConstantUncertainty`.

NISTConst also includes a list of common aliases to all the constants like `c` for speed of light. To add these aliases to your program you need to add `#define NISTCONST_COMMON_SYMBOLS_NAMES` before you include NISTConst. These are seperated out since there are multiple one letter variable definitions. This can result in variable name collisions with existing code if you decide to make all symbols in NISTConst namespace visible without adding the namespace prefix via `using namespace NISTConst;`.

NISTConst by default defines variables as `static constexpr double` for C++ which wont compile on  older compilers. To enable the header to compile on C++98/C++C03  you need to add `#define NISTCONST_PRECXX11` before you include NISTConst.
## Example Usage

```cpp
#define NISTCONST_UNCERTAINTY // To include uncertainties
#define NISTCONST_COMMON_SYMBOLS_NAMES // Common symbols and names for constants.
#define NISTCONST_PRECXX11 //
#include <NISTConst/NISTConst.hpp>

//Calculates the mass defect, the difference between the mass of the atom 
//and the sum of the masses of its parts in unified atomic mass units.
double MassDefectInu(const int atomicNumber, const int massNumber, const double massAtom)
{
	const double protonMass = atomicNumber * NISTConst::protonMassInu;
	const double electronMass = atomicNumber * NISTConst::electronMassInu;
	const double neutronMass = (massNumber - atomicNumber) * NISTConst::neutronMassInu;

	return protonMass + electronMass + neutronMass - massAtom;	
}
```

## FAQ

1. Will you support other languages besides C/C++?

   Yes. We eventually intend to support Swift, GO, Java and a few other languages.

2. Why are you missing _____ constant?

   Currently NISTConst intends to only have the constants defined by CODATA and listed by NIST as well as some common aliases. There are some obvious omitions especially in for atomic constants. Eventually we will release a way to include these "missing" constants. 

3. Why does wikipedia and google disagree with some of your values?

   It is because NISTConst values are frozen to the values present in [CODATA-2014](https://dx.doi.org/10.1063/1.4954402) while google and wikipedia are able to pick values from any source. An example of this is for the mass of the proton. As of 8/8/17:

| Proton Mass | Source |
| --- | --- |
| 1.007276466879 u | NISTConst from NIST/CODATA 2014 |
| 1.007276466879 u | Wikipedia |
| 1.007276466812 u | Google |
| 1.007276466583 u | Latest value from ["High-Precision Measurement of the Proton�s Atomic Mass"](https://doi.org/10.1103/PhysRevLett.119.033001) |

   The latest value will probably be adopted by both google and wikipedia in the near future.

4. The value of _____ is wrong! Can you change it to ...?

   Check either from [HERE](https://github.com/DrGrafil/NISTConst/blob/master/CODATA/Table%20of%20NIST%20Constant%20CODATA%202014.txt) or [HERE](https://physics.nist.gov/cuu/Constants/) or [HERE](https://dx.doi.org/10.1063/1.4954402) before e-mailing us. NISTConst sticks stricktly to the values reported by NIST/CODATA. If NISTConst disagrees with NIST/CODATA we will change the value to be in agreement with NIST/CODATA.

---
## Release notes

### [NISTConst 1.1.0](https://github.com/DrGrafil/NISTConst/releases/latest)
#### Features:
- Constants are defined as static constexpr for >C++11 compilers
- Added `#define NISTCONST_PRECXX11` macro for older compilers.
- Macro to detect C vs C++ is compiling

#### Improvements:
- Added additional Install instructions to readme.
- Detabifyed the header file.

#### Fixes:
- Fixed bug in README code.

---
## Release notes

### [NISTConst 1.0.0](https://github.com/DrGrafil/NISTConst/releases/latest)
#### Features:
- Completed verification.
- Completed final pass for public release.

#### Improvements:
- Added Install instructions to readme.
- Moved NISTconst to NISTConst folder

#### Fixes:
- Fixed documentation for inverseFineStructureConstantUncertainty.
- Fixed issues with generating pdf documentation.

---
### [NISTConst 0.9.0](https://github.com/DrGrafil/NISTConst/releases/latest)
#### Features:
- Created aliases to all constants using common names and symbols.
- Alias included through #define NISTCONST_COMMON_SYMBOLS_NAMES.
- Added uncertainty constants to all common names and symbols constants.
- Documented all common names and symbols constants.

#### Improvements:
- Renamed BohrMagnetonInInversemPerT to BohrMagnetonInInversemT
- Switched License to MIT

#### Fixes:
- Capitalized Fine-structure


---

### [NISTConst 0.8.0](https://github.com/DrGrafil/NISTConst/tree/0.8.0)
#### Features:
- Completed documentation.
- Readme file that isnt one line.

#### Improvements:
- Added units in documentation to all atomic units.
- Clarified atomic mass unit to unified atomic mass unit.
- Added spaces where necissary in units documentation.
- Moved inverse fine structure constant to be under Fine structure constant.
- Brining tau particle and triton notation inline with other particles.
- Renamed PlanckMassInGeV to PlanckMassInGeVpercSquared.
- Replaced lambdabar with lambda/2pi in documentation.
- Added radians to units for gyromagnetic ratios.

#### Fixes:
- Fixed issue when compiling with NISTCONST_UNCERTAINTY defined.  
- Fixed uncertainty constant names for: electronVolt.
- Fixed error in name of NewtonianConstantOfGravitationOverhbarc.
- Fixed misspelling of tesla in few places.

---

### [NISTConst 0.7.0](https://github.com/DrGrafil/NISTConst/tree/0.7.0)
#### Features:
- All NIST constants and uncertainties are now included.  
- Passes compile check.