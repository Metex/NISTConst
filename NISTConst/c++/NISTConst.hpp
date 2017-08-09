/// @file NISTConst.hpp
///
/// @brief NIST Constants
///
//	 http://physics.nist.gov/constants
/// @author Elliot Grafil (Metex)
/// @date 8/5/17
/// @todo: require units on all things that have multiple unit definitions?
/// @todo: Resolve \lambdabar display issue https://tex.stackexchange.com/questions/96479/how-can-i-type-lambda-bar
/// @todo: Resolve \AA display issue
//=================================
// Header guard
#pragma once
//=================================
// Included dependencies

//=================================
// Forward declared dependencies

//=================================
// Document Groupings

// Following grouping done by NIST for constants

/// @defgroup NISTConst NIST Constants

/// @defgroup Universal Universal
/// @ingroup NISTConst

/// 	@defgroup ImpedanceOfVacuum Impedance of vacuum 
/// 	@ingroup Universal

/// 	@defgroup ElectricConstant Electric constant 
/// 	@ingroup Universal

/// 	@defgroup MagneticConstant Magnetic constant 
/// 	@ingroup Universal

/// 	@defgroup GravitationalConstant Gravitational constant
/// 	@ingroup Universal

/// 	@defgroup PlanckConstant Planck constant 
/// 	@ingroup Universal

/// 	@defgroup PlanckLength Planck length 
/// 	@ingroup Universal

/// 	@defgroup PlanckMass  Planck mass 
/// 	@ingroup Universal

/// 	@defgroup PlanckTemperature Planck temperature 
/// 	@ingroup Universal

/// 	@defgroup PlanckTime Planck time 
/// 	@ingroup Universal

/// 	@defgroup SpeedOfLight Speed of light
/// 	@ingroup Universal



/// @defgroup Electromagnetic Electromagnetic
/// @ingroup NISTConst

/// 	@defgroup BohrMagneton Bohr magneton  
/// 	@ingroup Electromagnetic

/// 	@defgroup ConductanceQuantum Conductance quantum  
/// 	@ingroup Electromagnetic

/// 	@defgroup ElementaryCharge Elementary charge 
/// 	@ingroup Electromagnetic

/// 	@defgroup JosephsonConstant Josephson constant 
/// 	@ingroup Electromagnetic

/// 	@defgroup MagneticFluxQuantum  Magnetic flux quantum
/// 	@ingroup Electromagnetic

/// 	@defgroup NuclearMagneton Nuclear magneton 
/// 	@ingroup Electromagnetic

/// 	@defgroup vonKlitzingConstant von Klitzing constant   
/// 	@ingroup Electromagnetic



/// @defgroup Atomic Atomic and nuclear
/// @ingroup NISTConst

/// 	@defgroup Alpha Alpha particle (Helium-4 nucleus)
/// 	@ingroup Atomic

/// 	@defgroup BohrRadius Bohr radius
/// 	@ingroup Atomic

/// 	@defgroup ComptonWavelength Compton Wavelength
/// 	@ingroup Atomic

/// 	@defgroup Deuteron Deuteron (Deuterium/Hydrogen-2 nucleus)
/// 	@ingroup Atomic

/// 	@defgroup Electron Electron particle
/// 	@ingroup Atomic

/// 	@defgroup FermiCoupling Fermi coupling constant  
/// 	@ingroup Atomic

/// 	@defgroup FineStructure Fine-structure constant  
/// 	@ingroup Atomic

/// 	@defgroup Hartree Hartree energy
/// 	@ingroup Atomic

/// 	@defgroup Helion Helion (Helium-3 nucleus)
/// 	@ingroup Atomic

/// 	@defgroup Muon Muon particle
/// 	@ingroup Atomic

/// 	@defgroup Neutron Neutron particle
/// 	@ingroup Atomic

/// 	@defgroup Proton Proton particle
/// 	@ingroup Atomic

/// 	@defgroup QuantumOfCirculation Quantum of circulation  
/// 	@ingroup Atomic

/// 	@defgroup RydbergConstant Rydberg constant
/// 	@ingroup Atomic

/// 	@defgroup Tau Tau particle
/// 	@ingroup Atomic

/// 	@defgroup Thomson Thomson cross section 
/// 	@ingroup Atomic

/// 	@defgroup Triton Triton (Tritium/Hydrogen-3 nucleus)
/// 	@ingroup Atomic

/// 	@defgroup WeakMixingAngle Weak mixing angle 
/// 	@ingroup Atomic



/// @defgroup PhysicoChemical Physico-Chemical
/// @ingroup NISTConst

/// 	@defgroup AtomicMassConstant Atomic mass constant  
/// 	@ingroup PhysicoChemical

/// 	@defgroup AvogadroConstant Avogadro constant  
/// 	@ingroup PhysicoChemical

/// 	@defgroup BoltzmannConstant Boltzmann constant 
/// 	@ingroup PhysicoChemical

/// 	@defgroup FaradayConstant Faraday constant
/// 	@ingroup PhysicoChemical

/// 	@defgroup FirstRadiationConstant first radiation constant 
/// 	@ingroup PhysicoChemical

/// 	@defgroup LoschmidtConstant Loschmidt constant  
/// 	@ingroup PhysicoChemical

/// 	@defgroup MolarGasConstant Molar gas constant 
/// 	@ingroup PhysicoChemical

/// 	@defgroup MolarPlanckConstant Molar Planck constant 
/// 	@ingroup PhysicoChemical

/// 	@defgroup MolarVolume molar volume of ideal gas
/// 	@ingroup PhysicoChemical

/// 	@defgroup SackurTetrodeConstant Sackur-Tetrode constant
/// 	@ingroup PhysicoChemical

/// 	@defgroup SecondRadiationConstant Second radiation constant  
/// 	@ingroup PhysicoChemical

/// 	@defgroup StefanBoltzmannConstant Stefan-Boltzmann constant 
/// 	@ingroup PhysicoChemical

/// 	@defgroup WienDisplacement Wien displacement law constant  
/// 	@ingroup PhysicoChemical



/// @defgroup Adopted Adopted
/// @ingroup NISTConst

/// 	@defgroup ConventionalJosephsonConstant Josephson constant 
/// 	@ingroup Adopted

/// 	@defgroup ConventionalvonKlitzingConstant von Klitzing constant 
/// 	@ingroup Adopted

/// 	@defgroup MolarMass Molar mass   
/// 	@ingroup Adopted

/// 	@defgroup GravityAcceleration Gravity acceleration
/// 	@ingroup Adopted

/// 	@defgroup StandardAtmosphere Standard atmosphere 
/// 	@ingroup Adopted

/// 	@defgroup StandardStatePressure Standard state pressure 
/// 	@ingroup Adopted


/// @defgroup Non-SI Non-SI units
/// @ingroup NISTConst

/// 	@defgroup AtomicUnit atomic units
/// 	@ingroup Non-SI

/// 	@defgroup ElectronVoltUnit Electron Volt unit
/// 	@ingroup Non-SI

/// 	@defgroup NaturalUnit Natural units
/// 	@ingroup Non-SI

/// 	@defgroup UnifiedAtomicMassUnit Unified atomic mass unit 
/// 	@ingroup Non-SI



/// @defgroup ConversionFactors Conversion factors
/// @ingroup NISTConst

/// 	@defgroup AtomicMassUnit Atomic mass unit
/// 	@ingroup ConversionFactors

/// 	@defgroup ElectronVolt Electron volt
/// 	@ingroup ConversionFactors

/// 	@defgroup Hartree Hartree
/// 	@ingroup ConversionFactors

/// 	@defgroup Hertz	Hertz 
/// 	@ingroup ConversionFactors

// Seems weird that it is here
/// 	@defgroup InverseFineStructureConstant inverse fine-structure constant  
/// 	@ingroup ConversionFactors

/// 	@defgroup InverseMeter inverse meter
/// 	@ingroup ConversionFactors

/// 	@defgroup Joule Joule
/// 	@ingroup ConversionFactors

/// 	@defgroup Kelvin Kelvin
/// 	@ingroup ConversionFactors

/// 	@defgroup Kilogram Kilogram
/// 	@ingroup ConversionFactors



/// @defgroup X-ray X-ray values
/// @ingroup NISTConst

/// 	@defgroup AngstromStar Angstrom star  
/// 	@ingroup X-ray

/// 	@defgroup Copper Copper 
/// 	@ingroup X-ray

/// 	@defgroup Molybdenum Molybdenum  
/// 	@ingroup X-ray

/// 	@defgroup Sillicon Sillicon
/// 	@ingroup X-ray

namespace NISTConst
{

	/// @addtogroup Sillicon
	/// @{
	const double latticeSpacingOfSilicon =									192.0155714e-12;			/**< \f$d_{220} \ (m)\f$  Silicon {220} lattice spacing in meters.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double latticeSpacingOfSiliconUncertainty =						0.0000032e-12; 				/**< \f$d_{220} \ (m)\f$  Uncertainty in silicon {220} lattice spacing in meters.*/ 
	#endif
	/// @}

	/// @addtogroup Alpha
	/// @{
	const double alphaParticleElectronMassRatio =                          	7294.29954136;				/**< \f$m_\alpha/m_e \ (1)\f$  */ 
	const double alphaParticleMass =										6.644657230e-27;			/**< \f$m_\alpha \ (kg)\f$  */ 
	const double alphaParticleMassInJ =										5.971920097e-10;			/**< \f$m_\alpha \ (\frac{J}{c^2})\f$  */ 
	const double alphaParticleMassInMeV =									3727.379378;				/**< \f$m_\alpha \ (\frac{MeV}{c^2})\f$  */ 
	const double alphaParticleMassInu =										4.001506179127;				/**< \f$m_\alpha \ (u)\f$  */ 
	const double alphaParticleMolarMass =									4.001506179127e-3;			/**< \f$M_\alpha \ (\frac{kg}{mol})\f$  */ 
	const double alphaParticleProtonMassRatio =								3.97259968907;        		/**< \f$m_\alpha/m_p \ (1)\f$  */ 
	
	#ifdef NISTCONST_UNCERTAINTY
	const double alphaParticleElectronMassRatioUncertainty =				0.00000024;					/**< \f$m_\alpha/m_e \ (1)\f$  */ 
	const double alphaParticleMassUncertainty =								0.000000082e-27;     		/**< \f$m_\alpha \ (kg)\f$  */ 
	const double alphaParticleMassInJUncertainty =							0.000000073e-10;      		/**< \f$m_\alpha \ (\frac{J}{c^2})\f$  */ 
	const double alphaParticleMassInMeVUncertainty =						0.000023;                	/**< \f$m_\alpha \ (\frac{MeV}{c^2})\f$  */ 
	const double alphaParticleMassInuUncertainty =							0.000000000063;     		/**< \f$m_\alpha \ (u)\f$  */ 
	const double alphaParticleMolarMassUncertainty =						0.000000000063e-3;  		/**< \f$M_\alpha \ (\frac{kg}{mol})\f$  */ 
	const double alphaParticleProtonMassRatioUncertainty =					0.00000000036;         		/**< \f$m_\alpha/m_p \ (1)\f$  */ 
	#endif  
	/// @}

	/// @addtogroup AngstromStar
	/// @{
	const double AngstromStar =												1.00001495e-10;				/**< \f$\unicode{x212B}^{\ast} \ (m)\f$ Angstrom star in meters.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double AngstromStarUncertainty =									0.00000090e-10;				/**< \f$\unicode{x212B}^{\ast} \ (m)\f$ Uncertainty in angstrom star in meters.*/ 
	#endif  
	/// @}
	
	/// @addtogroup AtomicMassConstant
	/// @{
	const double atomicMassConstant =										1.660539040e-27;			/**< \f$m_u \ (kg)\f$ Atomic mass constant in kilograms.*/ 
	const double atomicMassConstantInJPercSquared =							1.492418062e-10;			/**< \f$m_u \ (\frac{J}{c^2})\f$ Atomic mass constant in joules per speed of light squared.*/ 
	const double atomicMassConstantInMeVPercSquared =						931.4940954;				/**< \f$m_u \ (\frac{MeV}{c^2})\f$ Atomic mass constant in megaelectron volts per speed of light squared.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double atomicMassConstantUncertainty =							0.000000020e-27;			/**< \f$m_u \ (kg)\f$ Uncertainty in atomic mass constant in kilograms.*/ 
	const double atomicMassConstantInJPercSquaredUncertainty =				0.000000018e-10;			/**< \f$m_u \ (\frac{J}{c^2})\f$ Uncertainty in atomic mass constant in joules per speed of light squared.*/ 
	const double atomicMassConstantInMeVPercSquaredUncertainty =			0.0000057;					/**< \f$m_u \ (\frac{MeV}{c^2})\f$ Uncertainty in atomic mass constant in megaelectron volts per speed of light squared.*/ 
	#endif  
	/// @}
	
	/// @addtogroup AtomicMassUnit
	/// @{
	const double atomicMassUnitToElectronVolt =								931.4940954e6;				/**< \f$(1\ u)c^2 \ (eV)\f$ Atomic mass unit-electron volt relationship in electron volts.*/ 
	const double atomicMassUnitToHartree =									3.4231776902e7;				/**< \f$(1\ u)c^2 \ (E_h)\f$ Atomic mass unit-hartree relationship in hartree.*/ 
	const double atomicMassUnitToHertz =									2.2523427206e23;			/**< \f$\frac{(1\ u)c^2}{h} \ (Hz)\f$ Atomic mass unit-hertz relationship in hertz.*/ 
	const double atomicMassUnitToInverseMeter =								7.5130066166e14;			/**< \f$\frac{(1\ u)c}{h} \ (\frac{1}{m})\f$ Atomic mass unit-inverse meter relationship in inverse meters.*/ 
	const double atomicMassUnitToJoule =									1.492418062e-10;			/**< \f$(1\ u)c^2 \ (J)\f$ Atomic mass unit-joule relationship in joules.*/ 
	const double atomicMassUnitToKelvin =									1.08095438e13;				/**< \f$\frac{(1\ u)c^2}{k} \ (K)\f$ Atomic mass unit-kelvin relationship in kelvin.*/ 
	const double atomicMassUnitToKilogram =									1.660539040e-27;			/**< \f$1\ u\ (kg)\f$ Atomic mass unit-kilogram relationship in kilograms.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double atomicMassUnitToElectronVoltUncertainty =					0.0000057e6;				/**< \f$(1\ u)c^2 \ (eV)\f$ Uncertainty in atomic mass unit-electron volt relationship in electron volts.*/ 
	const double atomicMassUnitToHartreeUncertainty =						0.0000000016e7;				/**< \f$(1\ u)c^2 \ (E_h)\f$ Uncertainty in atomic mass unit-hartree relationship in hartree.*/ 
	const double atomicMassUnitToHertzUncertainty =							0.0000000010e23;			/**< \f$\frac{(1\ u)c^2}{h} \ (Hz)\f$ Uncertainty in atomic mass unit-hertz relationship in hertz.*/ 
	const double atomicMassUnitToInverseMeterUncertainty =					0.0000000034e14;			/**< \f$\frac{(1\ u)c}{h} \ (\frac{1}{m})\f$ Uncertainty in atomic mass unit-inverse meter relationship in inverse meters.*/ 
	const double atomicMassUnitToJouleUncertainty =							0.000000018e-10;			/**< \f$(1\ u)c^2 \ (J)\f$ Uncertainty in atomic mass unit-joule relationship in joules.*/ 
	const double atomicMassUnitToKelvinUncertainty =						0.00000062e13;				/**< \f$\frac{(1\ u)c^2}{k} \ (K)\f$ Uncertainty in atomic mass unit-kelvin relationship in kelvin.*/ 
	const double atomicMassUnitToKilogramUncertainty =						0.000000020e-27;			/**< \f$1\ u\ (kg)\f$ Uncertainty in atomic mass unit-kilogram relationship in kilograms.*/ 
	#endif  
	/// @}
	
	
	/// @addtogroup AtomicUnit
	/// @{
	const double atomicUnitOf1stHyperpolarizability =						3.206361329e-53;			/**< \f$\frac{e^3 a_0^3}{E_h^2} \ (\frac{C^3 m^3}{J^2})\f$ Atomic unit of 1st hyperpolarizability.*/
	const double atomicUnitOf2ndHyperpolarizability =						6.235380085e-65;			/**< \f$\frac{e^4 a_0^4}{E_h^3} \ (\frac{C^4 m^4}{J^3})\f$ Atomic unit of 2nd hyperpolarizability.*/
	const double atomicUnitOfAction =										1.054571800e-34;			/**< \f$\hbar \ (J s)\f$ Atomic unit of action.*/ 
	const double atomicUnitOfCharge =										1.6021766208e-19;			/**< \f$e \ (C)\f$  Atomic unit of charge.*/ 
	const double atomicUnitOfChargeDensity =								1.0812023770e12;			/**< \f$\frac{e}{a_0^3} \ (\frac{C}{m^3})\f$ Atomic unit of charge density.*/ 
	const double atomicUnitOfCurrent =										6.623618183e-3;				/**< \f$\frac{e E_h}{\hbar} \ (A)\f$ Atomic unit of current.*/ 
	const double atomicUnitOfElectricDipoleMoment =							8.478353552e-30;			/**< \f$e a_0 \ (C m)\f$ Atomic unit of electric dipole moment. */ 
	const double atomicUnitOfElectricField =								5.142206707e11;				/**< \f$\frac{E_h}{e a_0} \ (\frac{V}{m})\f$ Atomic unit of electric field.*/ 
	const double atomicUnitOfElectricFieldGradient =						9.717362356e21;				/**< \f$\frac{E_h}{e a_0^2}\ (\frac{V}{m^2})\f$ Atomic unit of electric field gradient.*/ 
	const double atomicUnitOfElectricPolarizability =						1.6487772731e-41;			/**< \f$\frac{e^2 a_0^2}{E_h} \ (\frac{C^2 m^2}{J})\f$ Atomic unit of electric polarizability. */ 
	const double atomicUnitOfElectricPotential =							27.21138602;				/**< \f$ \frac{E_h}{e}\ (V)\f$ Atomic unit of electric potential.*/ 
	const double atomicUnitOfElectricQuadrupoleMoment =						4.486551484e-40;			/**< \f$e a_0^2 \ (C m^2)\f$ Atomic unit of electric quadrupole moment.*/ 
	const double atomicUnitOfEnergy =										4.359744650e-18;			/**< \f$E_h \ (J)\f$ Atomic unit of energy.*/ 
	const double atomicUnitOfForce =										8.23872336e-8;				/**< \f$\frac{E_h}{a_0} \ (N)\f$ Atomic unit of force.*/ 
	const double atomicUnitOfLength =										0.52917721067e-10;			/**< \f$a_0 \ (m)\f$ Atomic unit of length.*/ 
	const double atomicUnitOfMagneticDipoleMoment =							1.854801999e-23;			/**< \f$\frac{\hbar e}{m_e} \ (\frac{J}{T})\f$ Atomic unit of magnetic dipole moment.*/ 
	const double atomicUnitOfMagneticFluxDensity =							2.350517550e5;				/**< \f$\frac{\hbar}{e a_0^2} \ (T)\f$ Atomic unit of magnetic flux density.*/ 
	const double atomicUnitOfMagnetizability =								7.8910365886e-29;			/**< \f$\frac{e^2a_0^2}{m_e} \ (\frac{J}{T^2})\f$ Atomic unit of magnetizability.*/ 
	const double atomicUnitOfMass =											9.10938356e-31;				/**< \f$m_e \ (kg)\f$ Atomic unit of mass.*/ 
	const double atomicUnitOfMomentum =										1.992851882e-24;			/**< \f$\frac{\hbar}{a_0} \ (\frac{kg m}{s})\f$ Atomic unit of momentum.*/ 
	const double atomicUnitOfPermittivity =									1.112650056e-10;			/**< \f$\frac{e^2}{a_0 E_h} \ (\frac{F}{m})\f$ Atomic unit of permittivity. */ 
	const double atomicUnitOfTime =											2.418884326509e-17;			/**< \f$\frac{\hbar}{E_h} \ (s)\f$ Atomic unit of time.*/ 
	const double atomicUnitOfVelocity =										2.18769126277e6;			/**< \f$\frac{a_0 E_h}{\hbar} \ (\frac{m}{s})\f$ Atomic unit of velocity.*/ 

	#ifdef NISTCONST_UNCERTAINTY
	const double atomicUnitOf1stHyperpolarizabilityUncertainty =			0.000000020e-53;			/**< \f$\frac{e^3 a_0^3}{E_h^2} \ (\frac{C^3 m^3}{J^2})\f$ Uncertainty in atomic unit of 1st hyperpolarizability.*/
	const double atomicUnitOf2ndHyperpolarizabilityUncertainty =			0.000000077e-65;			/**< \f$\frac{e^4 a_0^4}{E_h^3} \ (\frac{C^4 m^4}{J^3})\f$ Uncertainty in atomic unit of 2nd hyperpolarizability.*/
	const double atomicUnitOfActionUncertainty =							0.000000013e-34;			/**< \f$\hbar \ (J s)\f$ Uncertainty in atomic unit of action.*/ 
	const double atomicUnitOfChargeUncertainty =							0.0000000098e-19;			/**< \f$e \ (C)\f$ Uncertainty in atomic unit of charge.*/ 
	const double atomicUnitOfChargeDensityUncertainty =						0.0000000067e12;			/**< \f$\frac{e}{a_0^3} \ (\frac{C}{m^3})\f$ Uncertainty in atomic unit of charge density.*/ 
	const double atomicUnitOfCurrentUncertainty =							0.000000041e-3;				/**< \f$ \frac{e E_h}{\hbar} \ (A)\f$ Uncertainty in atomic unit of current.*/ 
	const double atomicUnitOfElectricDipoleMomentUncertainty =				0.000000052e-30;			/**< \f$ e a_0 \ (C m)\f$ Uncertainty in atomic unit of electric dipole moment. */ 
	const double atomicUnitOfElectricFieldUncertainty = 					0.000000032e11;				/**< \f$\frac{E_h}{e a_0} \ (\frac{V}{m})\f$ Uncertainty in atomic unit of electric field.*/ 
	const double atomicUnitOfElectricFieldGradientUncertainty =				0.000000060e21;				/**< \f$\frac{E_h}{e a_0^2}\ (\frac{V}{m^2})\f$ Uncertainty in atomic unit of electric field gradient.*/ 
	const double atomicUnitOfElectricPolarizabilityUncertainty =			0.0000000011e-41;			/**< \f$\frac{e^2 a_0^2}{E_h} \ (\frac{C^2 m^2}{J})\f$ Uncertainty in atomic unit of electric polarizability. */ 
	const double atomicUnitOfElectricPotentialUncertainty =					0.00000017;					/**< \f$ \frac{E_h}{e}\ (V)\f$ Uncertainty in atomic unit of electric potential.*/ 
	const double atomicUnitOfElectricQuadrupoleMomentUncertainty =			0.000000028e-40;			/**< \f$e a_0^2 \ (C m^2)\f$ Uncertainty in atomic unit of electric quadrupole moment.*/ 
	const double atomicUnitOfEnergyUncertainty =							0.000000054e-18;			/**< \f$E_h \ (J)\f$ Uncertainty in atomic unit of energy.*/ 
	const double atomicUnitOfForceUncertainty =								0.00000010e-8;				/**< \f$\frac{E_h}{a_0} \ (N)\f$ Uncertainty in atomic unit of force.*/ 
	const double atomicUnitOfLengthUncertainty =							0.00000000012e-10;			/**< \f$a_0 \ (m)\f$ Uncertainty in atomic unit of length.*/ 
	const double atomicUnitOfMagneticDipoleMomentUncertainty =				0.000000011e-23;			/**< \f$\frac{\hbar e}{m_e} \ (\frac{J}{T})\f$ Uncertainty in atomic unit of magnetic dipole moment.*/ 
	const double atomicUnitOfMagneticFluxDensityUncertainty =				0.000000014e5;				/**< \f$\frac{\hbar}{e a_0^2} \ (T)\f$ Uncertainty in atomic unit of magnetic flux density.*/ 
	const double atomicUnitOfMagnetizabilityUncertainty =					0.0000000090e-29;			/**< \f$\frac{e^2a_0^2}{m_e} \ (\frac{J}{T^2})\f$ Uncertainty in atomic unit of magnetizability.*/ 
	const double atomicUnitOfMassUncertainty =								0.00000011e-31;				/**< \f$m_e \ (kg)\f$ Uncertainty in atomic unit of mass.*/ 
	const double atomicUnitOfMomentumUncertainty =							0.000000024e-24;			/**< \f$\frac{\hbar}{a_0} \ (\frac{kg m}{s})\f$ Uncertainty in atomic unit of momentum.*/ 
	const double atomicUnitOfPermittivityUncertainty =                      0.0;						/**< \f$\frac{e^2}{a_0 E_h} \ (\frac{F}{m})\f$ Uncertainty in atomic unit of permittivity. Note should be 0.0 since it is a defined value.*/ 
	const double atomicUnitOfTimeUncertainty =								0.000000000014e-17;			/**< \f$\frac{\hbar}{E_h} \ (s)\f$ Uncertainty in atomic unit of time.*/ 
	const double atomicUnitOfVelocityUncertainty =							0.00000000050e6;			/**< \f$\frac{a_0 E_h}{\hbar} \ (\frac{m}{s})\f$ Uncertainty in atomic unit of velocity.*/ 
	#endif  
	/// @}
	
	/// @addtogroup AvogadroConstant 
	/// @{
	const double AvogadroConstant =											6.022140857e23;				/**< \f$N_A \ (\frac{1}{mol})\f$ Avogadro constant.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double AvogadroConstantUncertainty =								0.000000074e23;				/**< \f$N_A \ (\frac{1}{mol})\f$ Uncertainty in Avogadro constant.*/ 
	#endif  
	/// @}

	/// @addtogroup BohrMagneton
	/// @{
	const double BohrMagneton =												927.4009994e-26;			/**< \f$\mu_B \ (\frac{J}{T})\f$ Bohr magneton in joules per tesla.*/ 
	const double BohrMagnetonIneVPerT =										5.7883818012e-5;			/**< \f$\mu_B \ (\frac{eV}{T})\f$ Bohr magneton in electron volts per tesela.*/ 
	const double BohrMagnetonInHzPerT =										13.996245042e9;				/**< \f$\frac{\mu_B}{h} \ (\frac{Hz}{T})\f$ Bohr magneton in hertz per tesela.*/ 
	const double BohrMagnetonInInversemPerT	=								46.68644814;				/**< \f$\frac{\mu_B}{hc} \ (\frac{1}{m T})\f$ Bohr magneton in inverse meters tesla.*/ 
	const double BohrMagnetonInKPerT =										0.67171405;					/**< \f$\frac{\mu_B}{k} \ (\frac{K}{T})\f$ Bohr magneton in kelvin per tesla.*/ 
	
	#ifdef NISTCONST_UNCERTAINTY
	const double BohrMagnetonUncertainty =									0.0000057e-26;				/**< \f$\mu_B \ (\frac{J}{T})\f$ Uncertainty in Bohr magneton in joules per tesla.*/ 
	const double BohrMagnetonIneVPerTUncertainty =							0.0000000026e-5;			/**< \f$\mu_B \ (\frac{eV}{T})\f$ Uncertainty in Bohr magneton in electron volts per tesela.*/ 
	const double BohrMagnetonInHzPerTUncertainty =							0.000000086e9;				/**< \f$\frac{\mu_B}{h} \ (\frac{Hz}{T})\f$ Uncertainty in Bohr magneton in hertz per tesela.*/ 
	const double BohrMagnetonInInversemPerTUncertainty	=					0.00000029;					/**< \f$\frac{\mu_B}{hc} \ (\frac{1}{m T})\f$ Uncertainty in Bohr magneton in inverse meters tesla.*/ 
	const double BohrMagnetonInKPerTUncertainty =							0.00000039;					/**< \f$\frac{\mu_B}{k} \ (\frac{K}{T})\f$ Uncertainty in Bohr magneton in kelvin per tesla.*/ 
	#endif  
	/// @}
	
	/// @addtogroup BohrRadius
	/// @{
	const double BohrRadius =												0.52917721067e-10;			/**< \f$a_0 \ (m)\f$ Bohr radius in meters.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double BohrRadiusUncertainty =									0.00000000012e-10;			/**< \f$a_0 \ (m)\f$ Uncertainty in Bohr radius in meters.*/ 
	#endif  
	/// @}
	
	/// @addtogroup BoltzmannConstant
	/// @{
	const double BoltzmannConstant =										1.38064852e-23;				/**< \f$k \ (\frac{J}{K})\f$  Boltzmann constant in joules per kelvin.*/
	const double BoltzmannConstantIneVPerK =								8.6173303e-5;				/**< \f$k \ (\frac{J}{K})\f$  Boltzmann constant in electron volts per kelvin.*/
	const double BoltzmannConstantInHzPerK =								2.0836612e10;				/**< \f$\frac{k}{h} \ (\frac{Hz}{K})\f$  Boltzmann constant in hertz per kelvin.*/
	const double BoltzmannConstantInInversemK =								69.503457;					/**< \f$\frac{k}{h c} \ (\frac{1}{m K})\f$  Boltzmann constant in inverse meters per kelvin.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double BoltzmannConstantUncertainty =								0.00000079e-23;				/**< \f$k \ (\frac{J}{K})\f$ Uncertainty in Boltzmann constant in joules per kelvin.*/
	const double BoltzmannConstantIneVPerKUncertainty =						0.0000050e-5;				/**< \f$k \ (\frac{J}{K})\f$ Uncertainty in Boltzmann constant in electron volts per kelvin.*/
	const double BoltzmannConstantInHzPerKUncertainty =						0.0000012e10;				/**< \f$\frac{k}{h} \ (\frac{Hz}{K})\f$ Uncertainty in Boltzmann constant in hertz per kelvin.*/
	const double BoltzmannConstantInInversemKUncertainty =					0.000040; 					/**< \f$\frac{k}{h c} \ (\frac{1}{m K})\f$ Uncertainty in Boltzmann constant in inverse meters per kelvin.*/
	#endif  
	/// @}
	
	
	/// @addtogroup ImpedanceOfVacuum
	/// @{
	const double impedanceOfVacuum =										376.730313461;				/**< \f$Z_0 \ (\Omega)\f$ Characteristic impedance of vacuum in ohm.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double impedanceOfVacuum =										0.0;						/**< \f$Z_0 \ (\Omega)\f$ Uncertainty in characteristic impedance of vacuum in ohm. Note should be 0.0 since it is a defined value.*/ 
	#endif  
	/// @}
	
	/// @addtogroup Electron
	/// @{
	const double classicalElectronRadius =									2.8179403227e-15;			/**< \f$r_e \ (m)\f$ Classical electron radius in meters.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double classicalElectronRadiusUncertainty =						0.0000000019e-15;			/**< \f$r_e \ (m)\f$ Uncertainty in classical electron radiusin meters.*/
	#endif  
	/// @}
	
	/// @addtogroup ComptonWavelength
	/// @{
	const double ComptonWavelength =										2.4263102367e-12;			/**< \f$\lambda_C \ (m)\f$ Compton wavelength in meters.*/
	const double ComptonWavelengthOver2Pi =									386.15926764e-15;			/**< \f$\lambdabar_C \ (m)\f$ Compton wavelength over 2 pi in meters.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double ComptonWavelengthUncertainty =								0.0000000011e-12;			/**< \f$\lambda_C \ (m)\f$ Uncertainty in Compton wavelength in meters.*/
	const double ComptonWavelengthOver2PiUncertainty =						0.00000018e-15;				/**< \f$\lambdabar_C \ (m)\f$ Uncertainty in Compton wavelength over 2 pi in meters.*/
	#endif  
	/// @}
	
	/// @addtogroup ConductanceQuantum
	/// @{
	const double conductanceQuantum =										7.7480917310e-5;			/**< \f$G_0 \ (S)\f$ Conductance quantum in siemens.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double conductanceQuantumUncertainty =							0.0000000018e-5;			/**< \f$G_0 \ (S)\f$ Uncertainty in conductance quantum in siemens.*/
	#endif  
	/// @}
	
	/// @addtogroup ConventionalJosephsonConstant
	/// @{
	const double conventionalJosephsonConstant =							483597.9e9;					/**< \f$K_{J-90} \ (\frac{Hz}{V})\f$ Conventional value of Josephson constant in hertz per volt.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double conventionalJosephsonConstantUncertainty =					0.0;						/**< \f$K_{J-90} \ (\frac{Hz}{V})\f$ Uncertainty in conventional value of Josephson constant in hertz per volt. Note should be 0.0 since it is a defined value.*/
	#endif  
	/// @}
	
	
	/// @addtogroup ConventionalvonKlitzingConstant
	/// @{
	const double conventionalvonKlitzingConstant =							25812.807;					/**< \f$R_{K-90} \ (\Omega)\f$ Conventional value of von Klitzing constant.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double conventionalvonKlitzingConstantUncertainty =				25812.807;					/**< \f$R_{K-90} \ (\Omega)\f$ Uncertainty in conventional value of von Klitzing constant. Note should be 0.0 since it is a defined value.*/
	#endif  
	/// @}
	
	/// @addtogroup Copper
	/// @{
	const double CuXUnit =													1.00207697e-13;				/**< \f$xu(CuK\alpha_1) \ (m)\f$ Cu X unit in meters.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double CuXUnitUncertainty =										0.00000028e-13;				/**< \f$xu(CuK\alpha_1) \ (m)\f$ Uncertainty in Cu X unit in meters.*/
	#endif  
	/// @}
	
	/// @addtogroup Deuteron
	/// @{ 
	const double deuterongFactor =											0.8574382311;				/**< \f$g_D \ (1)\f$ Deuteron g factor.*/   
	const double deuteronElectronMagneticMomentRatio =						-4.664345535e-4;			/**< \f$\frac{\mu_D}{\mu_e} \ (1)\f$ Deuteron-electron magnetic moment ratio.*/         
	const double deuteronElectronMassRatio =								3670.48296785;				/**< \f$\frac{m_D}{m_e} \ (1)\f$ Deuteron-electron mass ratio.*/            
	const double deuteronMagneticMoment =									0.4330735040e-26;			/**< \f$\mu_D \ (\frac{J}{T})\f$ Deuteron magnetic moment in joules per tesela.*/
	const double deuteronMagneticMomentToBohrMagnetonRatio =				0.4669754554e-3;			/**< \f$\frac{\mu_D}{\mu_B} \ (1)\f$ Deuteron magnetic moment to Bohr magneton ratio.*/        
	const double deuteronMagneticMomentToNuclearMagnetonRatio =				0.8574382311;				/**< \f$\frac{\mu_D}{\mu_N} \ (1)\f$ Deuteron magnetic moment to nuclear magneton ratio.*/            
	const double deuteronMass =												3.343583719e-27;			/**< \f$m_D \ (kg)\f$ Deuteron mass in kg.*/
	const double deuteronMassInJPercSquared =								3.005063183e-10;			/**< \f$m_D \ (\frac{J}{c^2})\f$ Deuteron mass in joules per speed of light squared.*/
	const double deuteronMassInMeVPercSquared =								1875.612928;				/**< \f$m_D \ (\frac{MeV}{c^2})\f$ Deuteron mass in MeV per speed of light squared.*/
	const double deuteronMassInu =											2.013553212745;				/**< \f$m_D \ (u)\f$ Deuteron mass in unified atomic mass units.*/
	const double deuteronMolarMass =										2.013553212745e-3;			/**< \f$M_D \ (\frac{1}{mol})\f$ Deuteron molar mass in inverse mols.*/
	const double deuteronNeutronMagneticMomentRatio =						-0.44820652;				/**< \f$\frac{\mu_D}{\mu_n} \ (1)\f$ Deuteron-neutron magnetic moment ratio.*/              
	const double deuteronProtonMagneticMomentRatio =						0.3070122077;				/**< \f$\frac{\mu_D}{\mu_p} \ (1)\f$ Deuteron-neutron magnetic moment ratio.*/            
	const double deuteronProtonMassRatio =									1.99900750087;				/**< \f$\frac{m_D}{m_p} \ (1)\f$ Deuteron-proton magnetic moment ratio.*/          
	const double deuteronrmsChargeRadius =									2.1413e-15;					/**< \f$r_D \ (m)\f$ Deuteron rms charge radius in meters.*/
	
	#ifdef NISTCONST_UNCERTAINTY
	const double deuterongFactorUncertainty =								0.0000000048;				/**< \f$g_D \ (1)\f$ Uncertainty in deuteron g factor.*/   
	const double deuteronElectronMagneticMomentRatioUncertainty =			0.000000026e-4;				/**< \f$\frac{\mu_D}{\mu_e} \ (1)\f$ Uncertainty in deuteron-electron magnetic moment ratio.*/         
	const double deuteronElectronMassRatioUncertainty =						0.00000013;					/**< \f$\frac{m_D}{m_e} \ (1)\f$ Uncertainty in deuteron-electron mass ratio.*/            
	const double deuteronMagneticMomentUncertainty =						0.0000000036e-26;			/**< \f$\mu_D \ (\frac{J}{T})\f$ Uncertainty in deuteron magnetic moment in joules per tesela.*/
	const double deuteronMagneticMomentToBohrMagnetonRatioUncertainty =		0.0000000026e-3;			/**< \f$\frac{\mu_D}{\mu_B} \ (1)\f$ Uncertainty in deuteron magnetic moment to Bohr magneton ratio.*/        
	const double deuteronMagneticMomentToNuclearMagnetonRatioUncertainty =	0.0000000048;				/**< \f$\frac{\mu_D}{\mu_N} \ (1)\f$ Uncertainty in deuteron magnetic moment to nuclear magneton ratio.*/            
	const double deuteronMassUncertainty =									0.000000041e-27;			/**< \f$m_D \ (kg)\f$ Uncertainty in deuteron mass in kg.*/
	const double deuteronMassInJPercSquaredUncertainty =					0.000000037e-10;			/**< \f$m_D \ (\frac{J}{c^2})\f$ Uncertainty in deuteron mass in joules per speed of light squared.*/
	const double deuteronMassInMeVPercSquaredUncertainty =					0.000012;					/**< \f$m_D \ (\frac{MeV}{c^2})\f$ Uncertainty in deuteron mass in MeV per speed of light squared.*/
	const double deuteronMassInuUncertainty =								0.000000000040;				/**< \f$m_D \ (u)\f$ Uncertainty in deuteron mass in unified atomic mass units.*/
	const double deuteronMolarMassUncertainty =								0.000000000040e-3;			/**< \f$M_D \ (\frac{1}{mol})\f$ Uncertainty in deuteron molar mass in inverse mols.*/
	const double deuteronNeutronMagneticMomentRatioUncertainty =			0.00000011;					/**< \f$\frac{\mu_D}{\mu_n} \ (1)\f$ Uncertainty in deuteron-neutron magnetic moment ratio.*/              
	const double deuteronProtonMagneticMomentRatioUncertainty =				0.0000000015;				/**< \f$\frac{\mu_D}{\mu_p} \ (1)\f$ Uncertainty in deuteron-neutron magnetic moment ratio.*/            
	const double deuteronProtonMassRatioUncertainty =						0.00000000019;				/**< \f$\frac{m_D}{m_p} \ (1)\f$ Uncertainty in deuteron-proton magnetic moment ratio.*/          
	const double deuteronrmsChargeRadiusUncertainty =						0.0025e-15;					/**< \f$r_D \ (m)\f$ Uncertainty in deuteron rms charge radius in meters.*/
	#endif  
	/// @}
	
	/// @addtogroup ElectricConstant
	/// @{ 
	const double electricConstant =											8.854187817e-12;			/**< \f$\epsilon_0 \ (\frac{F}{m})\f$ Electric constant in farad per meter.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double electricConstant =											0.0;						/**< \f$\epsilon_0 \ (\frac{F}{m})\f$ Uncertainty in electric constant in farad per meter. Note should be 0.0 since it is a defined value.*/
	#endif  
	/// @}
	 
	/// @addtogroup Electron
	/// @{ 
	const double electronChargeToMass =												-1.758820024e11;			/**< \f$\frac{-e}{m_e} \ (\frac{C}{kg})\f$ Electron charge to mass quotient in coulombs per kilogram.*/ 
	const double electronDeuteronMagneticMomentRatio =								-2143.923499;				/**< \f$\frac{\mu_e}{\mu_D} \ (1)\f$ Electron-deuteron magnetic moment ratio.*/ 
	const double electronDeuteronMassRatio =										2.724437107484e-4;			/**< \f$\frac{m_e}{m_D} \ (1)\f$ Electron-deuteron mass ratio.*/ 
	const double electrongFactor =													-2.00231930436182;			/**< \f$g_e \ (1)\f$ Electron g factor.*/ 
	const double electronGyromagneticRatio =										1.760859644e11;				/**<\gamma_e \f$ \ (\frac{Hz}{T})\f$ Electron gyromagnetic ratio in hertz per tesla.*/ 
	const double electronGyromagneticRatioOver2pi =									28024.95164;				/**< \f$\frac{\gamma_e}{2\pi} \ (\frac{MHz}{T})\f$ Electron gyromagnetic ratio over 2 pi in megahertz per tesla.*/ 
	const double electronHelionMassRatio =											1.819543074854e-4;			/**< \f$\frac{m_e}{m_{^3\textrm{He}}} \ (1)\f$ Electron-helion mass ratio.*/ 
	const double electronMagneticMoment =											-928.4764620e-26;			/**< \f$\mu_e \ (\frac{J}{T})\f$ Electron magnetic moment in joules per tesla.*/ 
	const double electronMagneticMomentAnomaly =									1.15965218091e-3;			/**< \f$a_e \ (1)\f$ Electron magnetic moment anomaly.*/ 
	const double electronMagneticMomentToBohrMagnetonRatio =						-1.001159652180 91;			/**< \f$\frac{\mu_e}{\mu_B} \ (1)\f$ Electron magnetic moment to Bohr magneton ratio.*/ 
	const double electronMagneticMomentToNuclearMagnetonRatio =						-1838.28197234;				/**< \f$\frac{\mu_e}{\mu_N} \ (1)\f$ Electron magnetic moment to nuclear magneton ratio.*/ 
	const double electronMass =														9.10938356e-31;				/**< \f$m_e \ (kg)\f$ Electron mass in kilograms.*/ 
	const double electronMassInJPercSquared =										8.18710565e-14;				/**< \f$m_e \ (\frac{J}{c^2})\f$ Electron mass in joules per speed of light squared.*/ 
	const double electronMassInMeVPercSquared =										0.5109989461;				/**< \f$m_e \ (\frac{MeV}{c^2})\f$ Electron mass in megaelectron volts per speed of light squared.*/ 
	const double electronMassInu =													5.48579909070e-4;			/**< \f$m_e \ (u)\f$ Electron mass in unified atomic mass units.*/ 
	const double electronMolarMass =												5.48579909070e-7;			/**< \f$M_e \ (\frac{kg}{mol})\f$ Electron molar mass in kilograms per mole.*/ 
	const double electronMuonMagneticMomentRatio =									206.7669880;				/**< \f$\frac{\mu_e}{\mu_\mu} \ (1)\f$ Electron-muon magnetic moment ratio.*/ 
	const double electronMuonMassRatio =											4.83633170e-3;				/**< \f$\frac{m_e}{m_\mu} \ (1)\f$ Electron-muon mass ratio.*/ 
	const double electronNeutronMagneticMomentRatio =								960.92050;					/**< \f$\frac{\mu_e}{\mu_n} \ (1)\f$ Electron-neutron magnetic moment ratio.*/ 
	const double electronNeutronMassRatio =											5.4386734428e-4;			/**< \f$\frac{m_e}{m_n} \ (1)\f$ Electron-neutron mass ratio.*/ 
	const double electronProtonMagneticMomentRatio =								-658.2106866;				/**< \f$\frac{\mu_e}{\mu_p} \ (1)\f$ Electron-proton magnetic moment ratio.*/ 
	const double electronProtonMassRatio =											5.44617021352e-4;			/**< \f$\frac{m_e}{m_p} \ (1)\f$ Electron-proton mass ratio.*/ 
	const double electronTauMassRatio =												2.87592e-4;					/**< \f$\frac{m_e}{m_\tau} \ (1)\f$ Electron-tau mass ratio.*/ 
	const double electronToAlphaParticleMassRatio =									1.370933554798e-4;			/**< \f$\frac{m_e}{m_\alpha} \ (1)\f$ Electron to alpha particle mass ratio.*/ 
	const double electronToShieldedHelionMagneticMomentRatio =						864.058257;					/**< \f$\frac{\mu_e}{\mu'_{^3\textrm{He}}} \ (1)\f$ Electron to shielded helion magnetic moment ratio.*/ 
	const double electronToShieldedProtonMagneticMomentRatio =						-658.2275971;				/**< \f$\frac{\mu_e}{\mu'_p} \ (1)\f$ Electron to shielded proton magnetic moment ratio.*/ 
	const double electronTritonMassRatio =											1.819200062203e-4;			/**< \f$\frac{m_e}{m_\textrm{T}} \ (1)\f$ Electron-triton mass ratio.*/ 
	
	#ifdef NISTCONST_UNCERTAINTY
	const double electronChargeToMassUncertainty =									0.000000011e11;				/**< \f$\frac{-e}{m_e} \ (\frac{C}{kg})\f$ Uncertainty in electron charge to mass quotient in coulombs per kilogram.*/ 
	const double electronDeuteronMagneticMomentRatioUncertainty =					0.000012;					/**< \f$\frac{\mu_e}{\mu_D} \ (1)\f$ Uncertainty in electron-deuteron magnetic moment ratio.*/ 
	const double electronDeuteronMassRatioUncertainty =								0.000000000096e-4;			/**< \f$\frac{m_e}{m_D} \ (1)\f$ Uncertainty in electron-deuteron mass ratio.*/ 
	const double electrongFactorUncertainty =										0.00000000000052;			/**< \f$g_e \ (1)\f$ Uncertainty in electron g factor.*/ 
	const double electronGyromagneticRatioUncertainty =								0.000000011e11;				/**<\gamma_e \f$ \ (\frac{Hz}{T})\f$ Uncertainty in electron gyromagnetic ratio in hertz per tesla.*/ 
	const double electronGyromagneticRatioOver2piUncertainty =						0.00017;					/**< \f$\frac{\gamma_e}{2\pi} \ (\frac{MHz}{T})\f$ Uncertainty in electron gyromagnetic ratio over 2 pi in megahertz per tesla.*/ 
	const double electronHelionMassRatioUncertainty =								0.000000000088e-4;   		/**< \f$\frac{m_e}{m_{^3\textrm{He}}} \ (1)\f$ Uncertainty in electron-helion mass ratio.*/ 
	const double electronMagneticMomentUncertainty =								0.0000057e-26;				/**< \f$\mu_e \ (\frac{J}{T})\f$ Uncertainty in electron magnetic moment in joules per tesla.*/ 
	const double electronMagneticMomentAnomalyUncertainty =							0.00000000026e-3;			/**< \f$a_e \ (1)\f$ Uncertainty in electron magnetic moment anomaly.*/ 
	const double electronMagneticMomentToBohrMagnetonRatioUncertainty =				0.00000000000026;			/**< \f$\frac{\mu_e}{\mu_B} \ (1)\f$ Uncertainty in electron magnetic moment to Bohr magneton ratio.*/ 
	const double electronMagneticMomentToNuclearMagnetonRatioUncertainty =			0.00000017;					/**< \f$\frac{\mu_e}{\mu_N} \ (1)\f$ Uncertainty in electron magnetic moment to nuclear magneton ratio.*/ 
	const double electronMassUncertainty =											0.00000011e-31;				/**< \f$m_e \ (kg)\f$ Uncertainty in electron mass in kilograms.*/ 
	const double electronMassInJPercSquaredUncertainty =							0.00000010e-14;				/**< \f$m_e \ (\frac{J}{c^2})\f$ Uncertainty in electron mass in joules per speed of light squared.*/ 
	const double electronMassInMeVPercSquaredUncertainty =							0.0000000031;				/**< \f$m_e \ (\frac{MeV}{c^2})\f$ Uncertainty in electron mass in megaelectron volts per speed of light squared.*/ 
	const double electronMassInuUncertainty =										0.00000000016e-4;			/**< \f$m_e \ (u)\f$ Uncertainty in electron mass in unified atomic mass units.*/ 
	const double electronMolarMassUncertainty =										0.00000000016e-7;			/**< \f$M_e \ (\frac{kg}{mol})\f$ Uncertainty in electron molar mass in kilograms per mole.*/ 
	const double electronMuonMagneticMomentRatioUncertainty =						0.0000046;					/**< \f$\frac{\mu_e}{\mu_\mu} \ (1)\f$ Uncertainty in electron-muon magnetic moment ratio.*/ 
	const double electronMuonMassRatioUncertainty =									0.00000011e-3;				/**< \f$\frac{m_e}{m_\mu} \ (1)\f$ Uncertainty in electron-muon mass ratio.*/ 
	const double electronNeutronMagneticMomentRatioUncertainty =					0.00023;					/**< \f$\frac{\mu_e}{\mu_n} \ (1)\f$ Uncertainty in electron-neutron magnetic moment ratio.*/ 
	const double electronNeutronMassRatioUncertainty =								0.0000000027e-4;			/**< \f$\frac{m_e}{m_n} \ (1)\f$ Uncertainty in electron-neutron mass ratio.*/ 
	const double electronProtonMagneticMomentRatioUncertainty =						0.0000020;					/**< \f$\frac{\mu_e}{\mu_p} \ (1)\f$ Uncertainty in electron-proton magnetic moment ratio.*/ 
	const double electronProtonMassRatioUncertainty =								0.00000000052e-4;			/**< \f$\frac{m_e}{m_p} \ (1)\f$ Uncertainty in electron-proton mass ratio.*/ 
	const double electronTauMassRatioUncertainty =									0.00026e-4;					/**< \f$\frac{m_e}{m_\tau} \ (1)\f$ Uncertainty in electron-tau mass ratio.*/ 
	const double electronToAlphaParticleMassRatioUncertainty =						0.000000000045e-4;			/**< \f$\frac{m_e}{m_\alpha} \ (1)\f$ Uncertainty in electron to alpha particle mass ratio.*/ 
	const double electronToShieldedHelionMagneticMomentRatioUncertainty =			0.000010;					/**< \f$\frac{\mu_e}{\mu'_{^3\textrm{He}}} \ (1)\f$ Uncertainty in electron to shielded helion magnetic moment ratio.*/ 
	const double electronToShieldedProtonMagneticMomentRatioUncertainty =			0.0000072;					/**< \f$\frac{\mu_e}{\mu'_p} \ (1)\f$ Uncertainty in electron to shielded proton magnetic moment ratio.*/ 
	const double electronTritonMassRatioUncertainty =								0.000000000084e-4;			/**< \f$\frac{m_e}{m_\textrm{T}} \ (1)\f$ Uncertainty in electron-triton mass ratio.*/ 
	#endif  
	/// @}
	
	/// @addtogroup ElectronVoltUnit
	/// @{
	const double electron volt                                               1.602 176 6208e-19      0.0000000098e-19      J/**< \f$ \ ()\f$ .*/ 
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup ElectronVolt
	/// @{
	const double electron volt-atomic mass unit relationship                 1.073 544 1105e-9       0.0000000066e-9       u/**< \f$ \ ()\f$ .*/ 
	const double electron volt-hartree relationship                          3.674 932 248e-2        0.000000023e-2        E_h/**< \f$ \ ()\f$ .*/ 
	const double electron volt-hertz relationship                            2.417 989 262 e14        0.000000015 e14        Hz/**< \f$ \ ()\f$ .*/ 
	const double electron volt-inverse meter relationship                    8.065 544 005 e5         0.000000050 e5         m^-1/**< \f$ \ ()\f$ .*/ 
	const double electron volt-joule relationship                            1.602 176 6208e-19      0.0000000098e-19      J/**< \f$ \ ()\f$ .*/ 
	const double electron volt-kelvin relationship                           1.160 452 21 e4          0.000000 67 e4          K/**< \f$ \ ()\f$ .*/ 
	const double electron volt-kilogram relationship                         1.782 661 907e-36       0.000000011e-36       kg/**< \f$ \ ()\f$ .*/ 
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup ElementaryCharge
	/// @{
	const double elementary charge                                           1.602 176 6208e-19      0.0000000098e-19      C/**< \f$ \ ()\f$ .*/ 
	const double elementary charge over h                                    2.417 989 262 e14        0.000000015 e14        A J^-1/**< \f$ \ ()\f$ .*/ 
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup 
	/// @{
	const double Faraday constant                                            96 485.332 89            0.000 59                 C mol^-1/**< \f$ \ ()\f$ .*/ 
	const double Faraday constant for conventional electric current          96 485.3251              0.0012                   C_90 mol^-1/**< \f$ \ ()\f$ .*/ 
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup 
	/// @{
	const double Fermi coupling constant                                     1.166 3787e-5           0.0000006e-5           GeV^-2/**< \f$ \ ()\f$ .*/ 
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup 
	/// @{
	const double fine-structure constant                                     7.297 352 5664e-3       0.0000000017e-3       /**< \f$ \ ()\f$ .*/ 
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup 
	/// @{
	const double first radiation constant                                    3.741 771 790e-16       0.000000046e-16       W m^2/**< \f$ \ ()\f$ .*/ 
	const double first radiation constant for spectral radiance              1.191 042 953e-16       0.000000015e-16       W m^2 sr^-1/**< \f$ \ ()\f$ .*/ 
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup 
	/// @{
	const double Hartree energy                                              4.359 744 650e-18       0.000000054e-18       J/**< \f$ \ ()\f$ .*/ 
	const double Hartree energy in eV                                        27.211 386 02            0.000000 17             eV/**< \f$ \ ()\f$ .*/ 
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup 
	/// @{
	const double hartree-atomic mass unit relationship                       2.921 262 3197e-8       0.0000000013e-8       u/**< \f$ \ ()\f$ .*/ 
	const double hartree-electron volt relationship                          27.211 386 02            0.000000 17             eV/**< \f$ \ ()\f$ .*/	
	const double hartree-hertz relationship                                  6.579 683 920 711 e15    0.000000000 039 e15    Hz/**< \f$ \ ()\f$ .*/ 
	const double hartree-inverse meter relationship                          2.194 746 313 702 e7     0.000000000 013 e7     m^-1/**< \f$ \ ()\f$ .*/ 
	const double hartree-joule relationship                                  4.359 744 650e-18       0.000000054e-18       J/**< \f$ \ ()\f$ .*/ 
	const double hartree-kelvin relationship                                 3.157 7513 e5            0.0000018 e5            K/**< \f$ \ ()\f$ .*/ 
	const double hartree-kilogram relationship                               4.850 870 129e-35       0.000000060e-35       kg/**< \f$ \ ()\f$ .*/ 
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup 
	/// @{
	const double helion-electron mass ratio                                  5495.885 279 22          0.000000 27             /**< \f$ \ ()\f$ .*/ 
	const double helion g factor                                             -4.255 250 616           0.000000050            /**< \f$ \ ()\f$ .*/ 
	const double helion mag. mom.                                            -1.074 617 522e-26      0.000000014e-26       J T^-1/**< \f$ \ ()\f$ .*/ 
	const double helion mag. mom. to Bohr magneton ratio                     -1.158 740 958e-3       0.000000014e-3        /**< \f$ \ ()\f$ .*/ 
	const double helion mag. mom. to nuclear magneton ratio                  -2.127 625 308           0.000000025            /**< \f$ \ ()\f$ .*/ 
	const double helion mass                                                 5.006 412 700e-27       0.000000062e-27       kg/**< \f$ \ ()\f$ .*/ 
	const double helion mass energy equivalent                               4.499 539 341e-10       0.000000055e-10       J/**< \f$ \ ()\f$ .*/ 
	const double helion mass energy equivalent in MeV                        2808.391 586             0.000017                MeV/**< \f$ \ ()\f$ .*/ 
	const double helion mass in u                                            3.014 932 246 73         0.000000000 12         u/**< \f$ \ ()\f$ .*/ 
	const double helion molar mass                                           3.014 932 246 73e-3     0.000000000 12e-3     kg mol^-1/**< \f$ \ ()\f$ .*/ 
	const double helion-proton mass ratio                                    2.993 152 670 46         0.000000000 29         /**< \f$ \ ()\f$ .*/ 
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup 
	/// @{
	const double hertz-atomic mass unit relationship                         4.439 821 6616e-24      0.0000000020e-24      u/**< \f$ \ ()\f$ .*/ 
	const double hertz-electron volt relationship                            4.135 667 662e-15       0.000000025e-15       eV/**< \f$ \ ()\f$ .*/ 
	const double hertz-hartree relationship                                  1.519 829 846 0088e-16  0.000000000 0090e-16  E_h/**< \f$ \ ()\f$ .*/ 
	const double hertz-inverse meter relationship                            3.335 640 951...e-9     (exact)                  m^-1/**< \f$ \ ()\f$ .*/ 
	const double hertz-joule relationship                                    6.626 070 040e-34       0.000000081e-34       J/**< \f$ \ ()\f$ .*/ 
	const double hertz-kelvin relationship                                   4.799 2447e-11          0.0000028e-11          K/**< \f$ \ ()\f$ .*/ 
	const double hertz-kilogram relationship                                 7.372 497 201e-51       0.000000091e-51       kg/**< \f$ \ ()\f$ .*/ 
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup 
	/// @{
	const double inverse fine-structure constant                             137.035 999 139          0.000000031            /**< \f$ \ ()\f$ .*/ 
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup 
	/// @{
	const double inverse meter-atomic mass unit relationship                 1.331 025 049 00e-15    0.000000000 61e-15    u/**< \f$ \ ()\f$ .*/ 
	const double inverse meter-electron volt relationship                    1.239 841 9739e-6       0.0000000076e-6       eV/**< \f$ \ ()\f$ .*/ 
	const double inverse meter-hartree relationship                          4.556 335 252 767e-8    0.000000000 027e-8    E_h/**< \f$ \ ()\f$ .*/ 
	const double inverse meter-hertz relationship                            299 792 458              (exact)                  Hz/**< \f$ \ ()\f$ .*/ 
	const double inverse meter-joule relationship                            1.986 445 824e-25       0.000000024e-25       J/**< \f$ \ ()\f$ .*/ 
	const double inverse meter-kelvin relationship                           1.438 777 36e-2         0.000000 83e-2         K/**< \f$ \ ()\f$ .*/ 
	const double inverse meter-kilogram relationship                         2.210 219 057e-42       0.000000027e-42       kg/**< \f$ \ ()\f$ .*/ 
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup 
	/// @{
	const double inverse of conductance quantum                              12 906.403 7278          0.0000029               ohm/**< \f$ \ ()\f$ .*/
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup 
	/// @{
	const double Josephson constant                                          483 597.8525 e9          0.0030 e9                Hz V^-1/**< \f$ \ ()\f$ .*/ 
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup 
	/// @{
	const double joule-atomic mass unit relationship                         6.700 535 363 e9         0.000000082 e9         u/**< \f$ \ ()\f$ .*/ 
	const double joule-electron volt relationship                            6.241 509 126 e18        0.000000038 e18        eV/**< \f$ \ ()\f$ .*/ 
	const double joule-hartree relationship                                  2.293 712 317 e17        0.000000028 e17        E_h/**< \f$ \ ()\f$ .*/ 
	const double joule-hertz relationship                                    1.509 190 205 e33        0.000000019 e33        Hz/**< \f$ \ ()\f$ .*/ 
	const double joule-inverse meter relationship                            5.034 116 651 e24        0.000000062 e24        m^-1/**< \f$ \ ()\f$ .*/ 
	const double joule-kelvin relationship                                   7.242 9731 e22           0.0000042 e22           K/**< \f$ \ ()\f$ .*/ 
	const double joule-kilogram relationship                                 1.112 650 056...e-17    (exact)                  kg/**< \f$ \ ()\f$ .*/ 
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup 
	/// @{
	const double kelvin-atomic mass unit relationship                        9.251 0842e-14          0.0000053e-14          u/**< \f$ \ ()\f$ .*/ 
	const double kelvin-electron volt relationship                           8.617 3303e-5           0.0000050e-5           eV/**< \f$ \ ()\f$ .*/ 
	const double kelvin-hartree relationship                                 3.166 8105e-6           0.0000018e-6           E_h/**< \f$ \ ()\f$ .*/ 
	const double kelvin-hertz relationship                                   2.083 6612 e10           0.0000012 e10           Hz/**< \f$ \ ()\f$ .*/ 
	const double kelvin-inverse meter relationship                           69.503 457               0.000040                m^-1/**< \f$ \ ()\f$ .*/ 
	const double kelvin-joule relationship                                   1.380 648 52e-23        0.000000 79e-23        J/**< \f$ \ ()\f$ .*/ 
	const double kelvin-kilogram relationship                                1.536 178 65e-40        0.000000 88e-40        kg/**< \f$ \ ()\f$ .*/ 
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup 
	/// @{
	const double kilogram-atomic mass unit relationship                      6.022 140 857 e26        0.000000074 e26        u/**< \f$ \ ()\f$ .*/ 
	const double kilogram-electron volt relationship                         5.609 588 650 e35        0.000000034 e35        eV/**< \f$ \ ()\f$ .*/ 
	const double kilogram-hartree relationship                               2.061 485 823 e34        0.000000025 e34        E_h/**< \f$ \ ()\f$ .*/ 
	const double kilogram-hertz relationship                                 1.356 392 512 e50        0.000000017 e50        Hz/**< \f$ \ ()\f$ .*/ 
	const double kilogram-inverse meter relationship                         4.524 438 411 e41        0.000000056 e41        m^-1/**< \f$ \ ()\f$ .*/ 
	const double kilogram-joule relationship                                 8.987 551 787... e16     (exact)                  J/**< \f$ \ ()\f$ .*/ 
	const double kilogram-kelvin relationship                                6.509 6595 e39           0.0000037 e39           K/**< \f$ \ ()\f$ .*/ 
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup 
	/// @{
	const double lattice parameter of silicon                                543.102 0504e-12        0.0000089e-12          m/**< \f$ \ ()\f$ .*/ 
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup 
	/// @{
	const double Loschmidt constant (273.15 K, 100 kPa)                      2.651 6467 e25           0.0000015 e25           m^-3/**< \f$ \ ()\f$ .*/ 
	const double Loschmidt constant (273.15 K, 101.325 kPa)                  2.686 7811 e25           0.0000015 e25           m^-3/**< \f$ \ ()\f$ .*/ 
	
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup 
	/// @{
	const double mag. constant                                               12.566 370 614...e-7    (exact)                  N A^-2/**< \f$ \ ()\f$ .*/ 
	const double mag. flux quantum                                           2.067 833 831e-15       0.000000013e-15       Wb/**< \f$ \ ()\f$ .*/ 
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup 
	/// @{
	const double molar gas constant                                          8.314 4598               0.0000048               J mol^-1 K^-1/**< \f$ \ ()\f$ .*/ 
	
	const double molar mass constant                                         1e-3                    (exact)                  kg mol^-1/**< \f$ \ ()\f$ .*/ 
	const double molar mass of carbon-12                                     12e-3                   (exact)                  kg mol^-1/**< \f$ \ ()\f$ .*/ 
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup 
	/// @{
	const double molar Planck constant                                       3.990 312 7110e-10      0.0000000018e-10      J s mol^-1/**< \f$ \ ()\f$ .*/ 
	const double molar Planck constant times c                               0.119 626 565 582        0.000000000 054        J m mol^-1/**< \f$ \ ()\f$ .*/ 
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup 
	/// @{
	const double molar volume of ideal gas (273.15 K, 100 kPa)               22.710 947e-3           0.000013e-3            m^3 mol^-1/**< \f$ \ ()\f$ .*/ 
	const double molar volume of ideal gas (273.15 K, 101.325 kPa)           22.413 962e-3           0.000013e-3            m^3 mol^-1/**< \f$ \ ()\f$ .*/ 
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup Silicon
	/// @{
	const double molar volume of silicon                                     12.058 832 14e-6        0.000000 61e-6         m^3 mol^-1/**< \f$ \ ()\f$ .*/ 
	#ifdef NISTCONST_UNCERTAINTY
	
	#endif  
	/// @}
	
	/// @addtogroup Molybdenum
	/// @{
	const double MoXUnit =															1.00209952e-13;				/**< \f$xu(MoK\alpha_1) \ (m)\f$ Mo x unit in meters.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double MoXUnitUncertainty =												0.00000053e-13;				/**< \f$xu(MoK\alpha_1) \ (m)\f$ Uncertainty in Mo x unit in meters.*/ 
	#endif  
	/// @}
	
	/// @addtogroup Muon
	/// @{
	const double muonComptonWavelength =											11.73444111e-15;			/**< \f$\lambda_{C,\mu} \ (m)\f$ muon Compton wavelength in meters.*/ 
	const double muonComptonWavelengthOver2pi =										1.867594308e-15;			/**< \f$\lambdabar_{C,\mu} \ (m)\f$ muon Compton wavelength over 2 pi in meters.*/ 
	const double muonElectronMassRatio =											206.7682826;				/**< \f$\frac{m_\mu}{m_e} \ (1)\f$ muon-electron mass ratio.*/ 
	const double muongFactor =														-2.0023318418;				/**< \f$g_\mu \ (1)\f$ muon g factor.*/ 
	const double muonMagneticMoment =												-4.49044826e-26;			/**< \f$\mu_\mu \ (\frac{J}{T})\f$ muon magnetic moment in joules per tesla.*/ 
	const double muonMagneticMomentAnomaly =										1.16592089e-3;				/**< \f$a_\mu \ (1)\f$ muon magnetic moment anomaly.*/ 
	const double muonMagneticMomentToBohrMagnetonRatio =							-4.84197048e-3;				/**< \f$\frac{\mu_\mu}{\mu_B} \ (1)\f$ muon magnetic moment to Bohr magneton ratio.*/ 
	const double muonMagneticMomentToNuclearMagnetonRatio =							-8.89059705;				/**< \f$\frac{\mu_\mu}{\mu_N} \ (1)\f$ muon magnetic moment to nuclear magneton ratio .*/ 
	const double muonMass =															1.883531594e-28;			/**< \f$m_\mu \ (kg)\f$ muon mass in kilograms.*/ 
	const double muonMassInJPercSquared =											1.692833774e-11;			/**< \f$m_\mu \ (\frac{J}{c^2})\f$ muon mass in joules per speed of light squared.*/ 
	const double muonMassInMeVPercSquared =											105.6583745;				/**< \f$m_\mu \ (\frac{MeV}{c^2})\f$ muon mass in megaelectron volts per speed of light squared.*/ 
	const double muonMassInu =														0.1134289257;				/**< \f$m_\mu \ (u)\f$ muon mass in unified atomic mass units.*/ 
	const double muonMolarMass =													0.1134289257e-3;			/**< \f$M_\mu \ (\frac{kg}{mol})\f$ muon molar mass in kilograms per mole.*/ 
	const double muonNeutronMassRatio =												0.1124545167;				/**< \f$\frac{m_\mu}{m_n} \ (1)\f$ muon-neutron mass ratio.*/ 
	const double muonProtonMagneticMomentRatio =									-3.183345142;				/**< \f$\frac{\mu_\mu}{\mu_p} \ (1)\f$ muon-proton magnetic moment ratio.*/ 
	const double muonProtonMassRatio =												0.1126095262;				/**< \f$\frac{m_\mu}{m_p} \ (1)\f$ muon-proton mass ratio.*/ 
	const double muonTauMassRatio =													5.94649e-2;					/**< \f$\frac{m_\mu}{m_\tau} \ (1)\f$ muon-tau mass ratio.*/ 
	
	#ifdef NISTCONST_UNCERTAINTY
	const double muonComptonWavelengthUncertainty =									0.00000026e-15;				/**< \f$\lambda_{C,\mu} \ (m)\f$ Uncertainty in muon Compton wavelength in meters.*/ 
	const double muonComptonWavelengthOver2piUncertainty =							0.000000042e-15;			/**< \f$\lambdabar_{C,\mu} \ (m)\f$ Uncertainty in muon Compton wavelength over 2 pi in meters.*/ 
	const double muonElectronMassRatioUncertainty =									0.0000046;					/**< \f$\frac{m_\mu}{m_e} \ (1)\f$ Uncertainty in muon-electron mass ratio.*/ 
	const double muongFactorUncertainty =											0.0000000013;				/**< \f$g_\mu \ (1)\f$ Uncertainty in muon g factor.*/ 
	const double muonMagneticMomentUncertainty =									0.00000010e-26;				/**< \f$\mu_\mu \ (\frac{J}{T})\f$ Uncertainty in muon magnetic moment in joules per tesla.*/ 
	const double muonMagneticMomentAnomalyUncertainty =								0.00000063e-3;				/**< \f$a_\mu \ (1)\f$ Uncertainty in muon magnetic moment anomaly.*/ 
	const double muonMagneticMomentToBohrMagnetonRatioUncertainty =					0.00000011e-3;				/**< \f$\frac{\mu_\mu}{\mu_B} \ (1)\f$ Uncertainty in muon magnetic moment to Bohr magneton ratio.*/ 
	const double muonMagneticMomentToNuclearMagnetonRatioUncertainty =				0.00000020;					/**< \f$\frac{\mu_\mu}{\mu_N} \ (1)\f$ Uncertainty in muon magnetic moment to nuclear magneton ratio .*/ 
	const double muonMassUncertainty =												0.000000048e-28;			/**< \f$m_\mu \ (kg)\f$ Uncertainty in muon mass in kilograms.*/ 
	const double muonMassInJPercSquaredUncertainty =								0.000000043e-11;			/**< \f$m_\mu \ (\frac{J}{c^2})\f$ Uncertainty in muon mass in joules per speed of light squared.*/ 
	const double muonMassInMeVPercSquaredUncertainty =								0.0000024;					/**< \f$m_\mu \ (\frac{MeV}{c^2})\f$ Uncertainty in muon mass in megaelectron volts per speed of light squared.*/ 
	const double muonMassInuUncertainty =											0.0000000025;				/**< \f$m_\mu \ (u)\f$ Uncertainty in muon mass in unified atomic mass units.*/ 
	const double muonMolarMassUncertainty =											0.0000000025e-3;			/**< \f$M_\mu \ (\frac{kg}{mol})\f$ Uncertainty in muon molar mass in kilograms per mole.*/ 
	const double muonNeutronMassRatioUncertainty =									0.0000000025;				/**< \f$\frac{m_\mu}{m_n} \ (1)\f$ Uncertainty in muon-neutron mass ratio.*/ 
	const double muonProtonMagneticMomentRatio =									0.000000071;				/**< \f$\frac{\mu_\mu}{\mu_p} \ (1)\f$ Uncertainty in muon-proton magnetic moment ratio.*/ 
	const double muonProtonMassRatioUncertainty =									0.0000000025;				/**< \f$\frac{m_\mu}{m_p} \ (1)\f$ Uncertainty in muon-proton mass ratio.*/ 
	const double muonTauMassRatioUncertainty =										0.00054e-2;					/**< \f$\frac{m_\mu}{m_\tau} \ (1)\f$ Uncertainty in muon-tau mass ratio.*/ 
	#endif  
	/// @}
	
	/// @addtogroup NaturalUnit
	/// @{
	const double naturalUnitOfAction =												1.054571800e-34;			/**< \f$\hbar \ (J\ s)\f$ Natural unit of action in joules second.*/ 
	const double naturalUnitOfActionIneVs =											6.582119514e-16;			/**< \f$\hbar \ (eV\ s)\f$ Natural unit of action in electron volts second.*/ 
	const double naturalUnitOfEnergy =												8.18710565e-14;				/**< \f$m_e c^2 \ (J)\f$ Natural unit of energy in joules.*/ 
	const double naturalUnitOfEnergyInMeV =											0.5109989461;				/**< \f$m_e c^2 \ (MeV)\f$ Natural unit of energy in megaelectron volts.*/ 
	const double naturalUnitOfLength =												386.15926764e-15;			/**< \f$\lambdabar_C \ (m)\f$ Natural unit of length in meters.*/ 
	const double naturalUnitOfMass =												9.10938356e-31;				/**< \f$m_e \ (kg)\f$ Natural unit of mass in kilograms.*/ 
	const double naturalUnitOfMomentum =											2.730924488e-22;			/**<m_e c \f$ \ (\frac{kg\ m}{s})\f$ Natural unit of momentum in kilogram meters per second.*/ 
	const double naturalUnitOfMomentumInMeVPerc =									0.5109989461;				/**< \f$m_e c \ (\frac{MeV}{c})\f$ Natural unit of momentum in megaelectron volts per speed of light.*/ 
	const double naturalUnitOfTime =												1.28808866712e-21;			/**< \f$\frac{\hbar}{m_e c^2} \ (s)\f$ Natural unit of time in seconds.*/ 
	const double naturalUnitOfVelocity =											299792458;					/**< \f$c \ (\frac{m}{s})\f$ Natural unit of velocity in meters per second.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double naturalUnitOfActionUncertainty =									0.000000013e-34;			/**< \f$\hbar \ (J\ s)\f$ Uncertainty in natural unit of action in joules second.*/ 
	const double naturalUnitOfActionIneVsUncertainty =								0.000000040e-16;			/**< \f$\hbar \ (eV\ s)\f$ Uncertainty in natural unit of action in electron volts second.*/ 
	const double naturalUnitOfEnergyUncertainty =									0.00000010e-14;				/**< \f$m_e c^2 \ (J)\f$ Uncertainty in natural unit of energy in joules.*/ 
	const double naturalUnitOfEnergyInMeVUncertainty =								0.0000000031;				/**< \f$m_e c^2 \ (MeV)\f$ Uncertainty in natural unit of energy in megaelectron volts.*/ 
	const double naturalUnitOfLengthUncertainty =									0.00000018e-15;				/**< \f$\lambdabar_C \ (m)\f$ Uncertainty in natural unit of length in meters.*/ 
	const double naturalUnitOfMassUncertainty =										0.00000011e-31;				/**< \f$m_e \ (kg)\f$ Uncertainty in natural unit of mass in kilograms.*/ 
	const double naturalUnitOfMomentumUncertainty =									0.000000034e-22;			/**<m_e c \f$ \ (\frac{kg\ m}{s})\f$ Uncertainty in natural unit of momentum in kilogram meters per second.*/ 
	const double naturalUnitOfMomentumInMeVPercUncertainty =						0.0000000031;				/**< \f$m_e c \ (\frac{MeV}{c})\f$ Uncertainty in natural unit of momentum in megaelectron volts per speed of light.*/ 
	const double naturalUnitOfTimeUncertainty =										0.00000000058e-21;			/**< \f$\frac{\hbar}{m_e c^2} \ (s)\f$ Uncertainty in natural unit of time in seconds.*/ 
	const double naturalUnitOfVelocityUncertainty =									0.0; 						/**< \f$c \ (\frac{m}{s})\f$ Uncertainty in natural unit of velocity in meters per second. Note should be 0.0 since it is a defined value.*/ 
	#endif  
	/// @}
	
	/// @addtogroup Neutron
	/// @{
	const double neutronComptonWavelength =											1.31959090481e-15;			/**< \f$\lambda_{C,n} \ (m)\f$ Neutron Compton wavelength in meters.*/
	const double neutronComptonWavelengthOver2Pi =									0.21001941536e-15;			/**< \f$\lambdabar_{C,n} \ (m)\f$ Neutron Compton wavelength over 2 pi in meters.*/
	const double neutronElectronMagneticMomentRatio =								1.04066882e-3;				/**< \f$\frac{\mu_n}{\mu_e} \ (1)\f$ Neutron-electron magnetic moment ratio.*/
	const double neutronElectronMassRatio =											1838.68366158;				/**< \f$\frac{m_n}{m_e} \ (1)\f$ Neutron-electron mass ratio .*/
	const double neutrongFactor =													-3.82608545;				/**< \f$g_n \ (1)\f$ Neutron g factor.*/
	const double neutronGyromagneticRatio =											1.83247172e8;				/**< \f$\gamma_n \ (\frac{rad Hz}{T})\f$ Neutron gyromagnetic ratio in radian hertz per tesla. Note that the units of radians are added for clarity.*/
	const double neutronGyromagneticRatioOver2Pi =									29.1646933;					/**< \f$\frac{\gamma_n}{2\pi} \ (\frac{rad MHz}{T})\f$ Neutron gyromagnetic ratio over 2 pi in radian megahertz per tesla. Note that the units of radians are added for clarity.*/
	const double neutronMagneticMoment =											-0.96623650e-26;			/**< \f$\mu_n \ (\frac{J}{T})\f$ Neutron magnetic moment in joules per tesla.*/
	const double neutronMagneticMomentToBohrMagnetonRatio =							-1.04187563e-3;				/**< \f$\frac{\mu_n}{\mu_B} \ (1)\f$ Neutron magnetic moment to Bohr magneton ratio.*/
	const double neutronMagneticMomentToNuclearMagnetonRatio =						-1.91304273;				/**< \f$\frac{\mu_n}{\mu_N} \ (1)\f$ Neutron magnetic moment to nuclear magneton ratio.*/
	const double neutronMass =														1.674927471e-27;			/**< \f$m_n \ (kg)\f$ Neutron mass in kilograms.*/
	const double neutronMassInJPercSquared =										1.505349739e-10;			/**< \f$m_n \ (\frac{J}{c^2})\f$ Neutron mass in joules per speed of light squared.*/
	const double neutronMassInMeVPercSquared =										939.5654133;				/**< \f$m_n \ (\frac{MeV}{c^2})\f$ Neutron mass in megaelectron volts per speed of light squared.*/
	const double neutronMassInu =													1.00866491588;				/**< \f$m_n \ (u)\f$ Neutron mass in unified atomic mass unit.*/
	const double neutronMolarMass =													1.00866491588e-3;			/**< \f$M_n \ (\frac{kg}{mol})\f$ Neutron molar mass in kilogram per mole.*/
	const double neutronMuonMassRatio =												8.89248408;					/**< \f$\frac{m_n}{m_\mu} \ (1)\f$ Neutron-muon mass ratio.*/
	const double neutronProtonMagneticMomentRatio =									-0.68497934;				/**< \f$\frac{\mu_n}{\mu_p} \ (1)\f$ Neutron-proton magnetic moment ratio.*/
	const double neutronProtonMassDifference =										2.30557377e-30;				/**< \f$m_n - m_p \ (kg)\f$ Neutron-proton mass difference in kilograms.*/
	const double neutronProtonMassDifferenceInJPercSquared =						2.07214637e-13;				/**< \f$m_n - m_p \ (\frac{J}{c^2})\f$ Neutron-proton mass difference in joules per speed of light squared.*/
	const double neutronProtonMassDifferenceInMeVPercSquared =						1.29333205;					/**< \f$m_n - m_p \ (\frac{MeV}{c^2})\f$ Neutron-proton mass difference in megaelectron volts per speed of light squared.*/
	const double neutronProtonMassDifferenceInu =									0.00138844900;				/**< \f$m_n - m_p \ (u)\f$ Neutron-proton mass difference in unified atomic mass unit.*/
	const double neutronProtonMassRatio =											1.00137841898;				/**< \f$\frac{m_n}{m_p} \ (1)\f$ Neutron-proton mass ratio.*/
	const double neutronTauMassRatio =												0.528790;					/**< \f$\frac{m_n}{m_\tau} \ (1)\f$ Neutron-tau mass ratio.*/
	const double neutronToShieldedProtonMagneticMomentRatio =						-0.68499694;				/**< \f$\frac{\mu_n}{\mu'_p} \ (1)\f$ Neutron to shielded proton magnetic moment ratio.*/
	
	#ifdef NISTCONST_UNCERTAINTY
	const double neutronComptonWavelengthUncertainty =								0.00000000088e-15;			/**< \f$\lambda_{C,n} \ (m)\f$ Uncertainty in neutron Compton wavelength in meters.*/
	const double neutronComptonWavelengthOver2PiUncertainty =						0.00000000014e-15;			/**< \f$\lambdabar_{C,n} \ (m)\f$ Uncertainty in neutron Compton wavelength over 2 pi in meters.*/
	const double neutronElectronMagneticMomentRatioUncertainty =					0.00000025e-3;				/**< \f$\frac{\mu_n}{\mu_e} \ (1)\f$ Uncertainty in neutron-electron magnetic moment ratio.*/
	const double neutronElectronMassRatioUncertainty =								0.00000090;					/**< \f$\frac{m_n}{m_e} \ (1)\f$ Uncertainty in neutron-electron mass ratio .*/
	const double neutrongFactorUncertainty =										0.00000090;					/**< \f$g_n \ (1)\f$ Uncertainty in neutron g factor.*/
	const double neutronGyromagneticRatioUncertainty =								0.00000043e8;				/**< \f$\gamma_n \ (\frac{rad Hz}{T})\f$ Uncertainty in neutron gyromagnetic ratio in radian hertz per tesla. Note that the units of radians are added for clarity.*/
	const double neutronGyromagneticRatioOver2PiUncertainty =						0.0000069;					/**< \f$\frac{\gamma_n}{2\pi} \ (\frac{rad MHz}{T})\f$ Uncertainty in neutron gyromagnetic ratio over 2 pi in radian megahertz per tesla. Note that the units of radians are added for clarity.*/
	const double neutronMagneticMomentUncertainty =									0.00000023e-26;				/**< \f$\mu_n \ (\frac{J}{T})\f$ Uncertainty in neutron magnetic moment in joules per tesla.*/
	const double neutronMagneticMomentToBohrMagnetonRatioUncertainty =				0.00000025e-3;				/**< \f$\frac{\mu_n}{\mu_B} \ (1)\f$ Uncertainty in neutron magnetic moment to Bohr magneton ratio.*/
	const double neutronMagneticMomentToNuclearMagnetonRatioUncertainty =			0.00000045;					/**< \f$\frac{\mu_n}{\mu_N} \ (1)\f$ Uncertainty in neutron magnetic moment to nuclear magneton ratio.*/
	const double neutronMassUncertainty =											0.000000021e-27;			/**< \f$m_n \ (kg)\f$ Uncertainty in neutron mass in kilograms.*/
	const double neutronMassInJPercSquaredUncertainty =								0.000000019e-10;			/**< \f$m_n \ (\frac{J}{c^2})\f$ Uncertainty in neutron mass in joules per speed of light squared.*/
	const double neutronMassInMeVPercSquaredUncertainty =							0.0000058;					/**< \f$m_n \ (\frac{MeV}{c^2})\f$ Uncertainty in neutron mass in megaelectron volts per speed of light squared.*/
	const double neutronMassInuUncertainty =										0.00000000049;				/**< \f$m_n \ (u)\f$ Uncertainty in neutron mass in unified atomic mass unit.*/
	const double neutronMolarMassUncertainty =										0.00000000049e-3;			/**< \f$M_n \ (\frac{kg}{mol})\f$ Uncertainty in neutron molar mass in kilogram per mole.*/
	const double neutronMuonMassRatioUncertainty =									0.00000020;					/**< \f$\frac{m_n}{m_\mu} \ (1)\f$ Uncertainty in neutron-muon mass ratio.*/
	const double neutronProtonMagneticMomentRatioUncertainty =						0.00000016;					/**< \f$\frac{\mu_n}{\mu_p} \ (1)\f$ Uncertainty in neutron-proton magnetic moment ratio.*/
	const double neutronProtonMassDifferenceUncertainty =							0.00000085e-30;				/**< \f$m_n - m_p \ (kg)\f$ Uncertainty in neutron-proton mass difference in kilograms.*/
	const double neutronProtonMassDifferenceInJPercSquaredUncertainty =				0.00000076e-13;				/**< \f$m_n - m_p \ (\frac{J}{c^2})\f$ Uncertainty in neutron-proton mass difference in joules per speed of light squared.*/
	const double neutronProtonMassDifferenceInMeVPercSquaredUncertainty =			0.00000048;					/**< \f$m_n - m_p \ (\frac{MeV}{c^2})\f$ Uncertainty in neutron-proton mass difference in megaelectron volts per speed of light squared.*/
	const double neutronProtonMassDifferenceInuUncertainty =						0.00000000051;				/**< \f$m_n - m_p \ (u)\f$ Uncertainty in neutron-proton mass difference in unified atomic mass unit.*/
	const double neutronProtonMassRatioUncertainty =								0.00000000051;				/**< \f$\frac{m_n}{m_p} \ (1)\f$ Uncertainty in neutron-proton mass ratio.*/
	const double neutronTauMassRatioUncertainty =									0.000048;					/**< \f$\frac{m_n}{m_\tau} \ (1)\f$ Uncertainty in neutron-tau mass ratio.*/
	const double neutronToShieldedProtonMagneticMomentRatioUncertainty =			0.00000016;					/**< \f$\frac{\mu_n}{\mu'_p} \ (1)\f$ Uncertainty in neutron to shielded proton magnetic moment ratio.*/
	#endif  
	/// @}
	
	/// @addtogroup GravitationalConstant
	/// @{            
	const double NewtonianConstantOfGravitation =									6.67408e-11;				/**< \f$G \ (\frac{m^3}{kg s^2})\f$ Newtonian constant of gravitation in meters cubed per kilogram second squared.*/
	const double NewtonianConstantOfGravitationOverhbarcUncertainty =				6.70861e-39;				/**< \f$\frac{G}{\hbar c} \ ((\frac{GeV}{c^2})^-2)\f$ Newtonian constant of gravitation over h-bar c in speed of light to the fourth per gigaelectron volt squared.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double NewtonianConstantOfGravitation =									0.00031e-11;				/**< \f$G \ (\frac{m^3}{kg s^2})\f$ Uncertainty in Newtonian constant of gravitation in meters cubed per kilogram second squared.*/
	const double NewtonianConstantOfGravitationOverhbarcUncertainty =				0.00031e-39;				/**< \f$\frac{G}{\hbar c} \ ((\frac{GeV}{c^2})^-2)\f$ Uncertainty in Newtonian constant of gravitation over h-bar c in speed of light to the fourth per gigaelectron volt squared.*/
	#endif  
	/// @}
	
	/// @addtogroup NuclearMagneton
	/// @{
	const double nuclearMagneton =													5.050783699e-27;			/**< \f$\mu_N \ (\frac{J}{T})\f$ Nuclear magneton in joules per tesla.*/
	const double nuclearMagnetonIneVPerT =											3.1524512550e-8;			/**< \f$ \ (\frac{eV}{T})\f$ Nuclear magneton in electron volts per tesla.*/
	const double nuclearMagnetonInInversemT =										2.542623432e-2;				/**< \f$\frac{\mu_N}{hc} \ (\frac{1}{mT})\f$ Nuclear magneton in inverse meters tesla.*/
	const double nuclearMagnetonInKPerT =											3.6582690e-4;				/**< \f$\frac{\mu_N}{k} \ (\frac{K}{T})\f$ Nuclear magneton in electron kelvin per tesla.*/
	const double nuclearMagnetonInMHzPerT =											7.622593285;				/**< \f$\frac{\mu_N}{h} \ (\frac{MHz}{T})\f$ Nuclear magneton in megahertz per tesla.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double nuclearMagnetonUncertainty =										0.000000031e-27;			/**< \f$\mu_N \ (\frac{J}{T})\f$ Uncertainty in nuclear magneton in joules per tesla.*/
	const double nuclearMagnetonIneVPerTUncertainty =								0.0000000015e-8;			/**< \f$ \ (\frac{eV}{T})\f$ Uncertainty in nuclear magneton in electron volts per tesla.*/
	const double nuclearMagnetonInInversemTUncertainty =							0.000000016e-2;				/**< \f$\frac{\mu_N}{hc} \ (\frac{1}{mT})\f$ Uncertainty in nuclear magneton in inverse meters tesla.*/
	const double nuclearMagnetonInKPerTUncertainty =								0.0000021e-4;				/**< \f$\frac{\mu_N}{k} \ (\frac{K}{T})\f$ Uncertainty in nuclear magneton in electron kelvin per tesla.*/
	const double nuclearMagnetonInMHzPerTUncertainty =								0.000000047;				/**< \f$\frac{\mu_N}{h} \ (\frac{MHz}{T})\f$ Uncertainty in nuclear magneton in megahertz per tesla.*/
	#endif  
	/// @}
	
	/// @addtogroup PlanckConstant
	/// @{
	const double PlanckConstant =													6.626070040e-34;			/**< \f$h \ (J s)\f$ Planck constant in joule seconds.*/
	const double PlanckConstantIneVs =												4.135667662e-15;			/**< \f$h \ (eV s)\f$ Planck constant in electron volt seconds.*/
	const double PlanckConstantOver2Pi =											1.054571800e-34;			/**< \f$\hbar \ (J s)\f$ Planck constant over 2 pi in joule seconds.*/
	const double PlanckConstantOver2PiIneVs =										6.582119514e-16;			/**< \f$\hbar \ (eV s)\f$ Planck constant over 2 pi in electron volt seconds.*/
	const double PlanckConstantOver2PiTimescInMeVfm =								197.3269788;				/**< \f$\hbar c \ (MeV fm)\f$ Planck constant over 2 pi times c in megaelectron volt femtometers.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double PlanckConstantUncertainty =										0.000000081e-34;			/**< \f$h \ (J s)\f$ Uncertainty in Planck constant in joule seconds.*/
	const double PlanckConstantIneVsUncertainty =									0.000000025e-15;			/**< \f$h \ (eV s)\f$ Uncertainty in Planck constant in electron volt seconds.*/
	const double PlanckConstantOver2PiUncertainty =									0.000000013e-34;			/**< \f$\hbar \ (J s)\f$ Uncertainty in Planck constant over 2 pi in joule seconds.*/
	const double PlanckConstantOver2PiIneVsUncertainty =							0.000000040e-16;			/**< \f$\hbar \ (eV s)\f$ Uncertainty in Planck constant over 2 pi in electron volt seconds.*/
	const double PlanckConstantOver2PiTimescInMeVfmUncertainty =					0.0000012;					/**< \f$\hbar c \ (MeV fm)\f$ Uncertainty in Planck constant over 2 pi times c in megaelectron volt femtometers.*/
	#endif  
	/// @}
	
	/// @addtogroup PlanckLength
	/// @{
	const double PlanckLength =														1.616229e-35;				/**< \f$l_P \ (m)\f$ Planck length in meters.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double PlanckLengthUncertainty =											0.000038e-35;				/**< \f$l_P \ (m)\f$ Uncertainty in Planck length in meters.*/
	#endif  
	/// @}
	
	/// @addtogroup PlanckMass
	/// @{
	const double PlanckMass =														2.176470e-8;				/**< \f$m_P \ (kg)\f$ Planck mass in kilograms.*/
	const double PlanckMassInGeV =													1.220910e19;				/**< \f$m_P \ (\frac{GeV}{c^2)\f$ Planck mass in gigaelectron volts per speed of light squared.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double PlanckMassUncertainty =											0.000051e-8;				/**< \f$m_P \ (kg)\f$ Uncertainty in Planck mass in kilograms.*/
	const double PlanckMassInGeVUncertainty =										0.000029e19;				/**< \f$m_P \ (\frac{GeV}{c^2)\f$ Uncertainty in Planck mass in gigaelectron volts per speed of light squared.*/
	#endif  
	/// @}
	
	/// @addtogroup PlanckTemperature
	/// @{
	const double PlanckTemperature =												1.416808e32;				/**< \f$T_P \ (K)\f$ Planck temperature in kelvins.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double PlanckTemperatureUncertainty =										0.000033e32;				/**< \f$T_P \ (K)\f$ Uncertainty in Planck temperature in kelvins.*/
	#endif  
	/// @}
	
	/// @addtogroup PlanckTime
	/// @{
	const double PlanckTime =														5.39116e-44;				/**< \f$t_P \ (s)\f$ Planck time in seconds.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double PlanckTimeUncertainty =											0.00013e-44;				/**< \f$t_P \ (s)\f$ Uncertainty in Planck time in seconds.*/
	#endif  
	/// @}
	
	/// @addtogroup Proton
	/// @{
	const double protonChargeToMassQuotient =										9.578833226e7;				/**< \f$\frac{e}{m_p} \ (\frac{C}{kg})\f$ Proton charge to mass quotient in coulombs per kilogram.*/
	const double protonComptonWavelength =											1.32140985396e-15;			/**< \f$\lambda_{C,p} \ (m)\f$ Proton Compton wavelength in meters.*/
	const double protonComptonWavelengthOver2Pi =									0.210308910109e-15;			/**< \f$\lambdabar_{C,p} \ (m)\f$ Proton Compton wavelength over 2 pi in meters.*/
	const double protonElectronMassRatio =											1836.15267389;				/**< \f$\frac{m_p}{m_e} \ (1)\f$ Proton-electron mass ratio.*/
	const double protongFactor =													5.585694702;				/**< \f$g_p \ (1)\f$ Proton g factor.*/
	const double protonGyromagneticRatio =											2.675221900e8;				/**< \f$\gamma_p \ (\frac{rad Hz}{T})\f$ Proton gyromagnetic ratio in radian hertz per tesla. Note that the units of radians are added for clarity.*/
	const double protonGyromagneticRatioOver2pi =									42.57747892;				/**< \f$\frac{\gamma_p}{2\pi} \ (\frac{rad MHz}{T})\f$ Proton gyromagnetic ratio over 2 pi in radian megaahertz per tesla. Note that the units of radians are added for clarity.*/
	const double protonMagneticMoment =												1.4106067873e-26;			/**< \f$\mu_p \ (\frac{J}{T})\f$ Proton magnetic moment in joules per tesla.*/
	const double protonMagneticMomentToBohrMagnetonRatio =							1.5210322053e-3;			/**< \f$\frac{\mu_p}{\mu_B} \ (1)\f$ Proton magnetic moment to Bohr magneton ratio.*/
	const double protonMagneticMomentToNuclearMagnetonRatio =						2.7928473508;				/**< \f$\frac{\mu_p}{\mu_N} \ (1)\f$ Proton magnetic moment to nuclear magneton ratio.*/
	const double protonMagneticShieldingCorrection =								25.691e-6;					/**< \f$\sigma'_p \ (1)\f$ Proton magnetic shielding correction.*/
	const double protonMass =														1.672621898e-27;			/**< \f$m_p \ (kg)\f$ Proton mass in kilograms.*/
	const double protonMassInJPercSquared =											1.503277593e-10;			/**< \f$m_p \ (\frac{J}{c^2})\f$ Proton mass in joules per speed of light squared.*/
	const double protonMassInMeVPercSquared =										938.2720813;				/**< \f$m_p \ (\frac{MeV}{c^2})\f$ Proton mass in megaelectron volts per speed of light squared.*/
	const double protonMassInu =													1.007276466879;				/**< \f$m_p \ (u)\f$ Proton mass in unified atomic mass unit.*/
	const double protonMolarMass =													1.007276466879e-3;			/**< \f$M_p \ (\frac{kg}{mol})\f$ Proton molar mass in kilograms per mole.*/
	const double protonMuonMassRatio =												8.88024338;					/**< \f$\frac{m_p}{m_\mu} \ (1)\f$ Proton-muon mass ratio.*/
	const double protonNeutronMagneticMomentRatio =									-1.45989805;				/**< \f$\frac{\mu_p}{\mu_n} \ (1)\f$ Proton-neutron magnetic moment ratio.*/
	const double protonNeutronMassRatio =											0.99862347844;				/**< \f$\frac{m_p}{m_n} \ (1)\f$ Proton-neutron mass ratio.*/
	const double protonrmsChargeRadius =											0.8751e-15;					/**< \f$r_p \ (m)\f$ Proton rms charge radius in meters.*/
	const double protonTauMassRatio =												0.528063;					/**< \f$\frac{m_p}{m_\tau} \ (1)\f$ proton-tau mass ratio.*/

    #ifdef NISTCONST_UNCERTAINTY
	const double protonChargeToMassQuotientUncertainty =							0.000000059e7;				/**< \f$\frac{e}{m_p} \ (\frac{C}{kg})\f$ Uncertainty in proton charge to mass quotient in coulombs per kilogram.*/
	const double protonComptonWavelengthUncertainty =								0.00000000061e-15;			/**< \f$\lambda_{C,p} \ (m)\f$ Uncertainty in proton Compton wavelength in meters.*/
	const double protonComptonWavelengthOver2PiUncertainty =						0.000000000097e-15;			/**< \f$\lambdabar_{C,p} \ (m)\f$ Uncertainty in proton Compton wavelength over 2 pi in meters.*/
	const double protonElectronMassRatioUncertainty =								0.00000017;					/**< \f$\frac{m_p}{m_e} \ (1)\f$ Uncertainty in proton-electron mass ratio.*/
	const double protongFactorUncertainty =											0.000000017;				/**< \f$g_p \ (1)\f$ Uncertainty in proton g factor.*/
	const double protonGyromagneticRatioUncertainty =								0.000000018e8;				/**< \f$\gamma_p \ (\frac{rad Hz}{T})\f$ Uncertainty in proton gyromagnetic ratio in radian hertz per tesla. Note that the units of radians are added for clarity.*/
	const double protonGyromagneticRatioOver2piUncertainty =						0.00000029;					/**< \f$\frac{\gamma_p}{2\pi} \ (\frac{rad MHz}{T})\f$ Uncertainty in proton gyromagnetic ratio over 2 pi in radian megaahertz per tesla. Note that the units of radians are added for clarity.*/
	const double protonMagneticMomentUncertainty =									0.0000000097e-26;			/**< \f$\mu_p \ (\frac{J}{T})\f$ Uncertainty in proton magnetic moment in joules per tesla.*/
	const double protonMagneticMomentToBohrMagnetonRatioUncertainty =				0.0000000046e-3;			/**< \f$\frac{\mu_p}{\mu_B} \ (1)\f$ Uncertainty in proton magnetic moment to Bohr magneton ratio.*/
	const double protonMagneticMomentToNuclearMagnetonRatioUncertainty =			0.0000000085;				/**< \f$\frac{\mu_p}{\mu_N} \ (1)\f$ Uncertainty in proton magnetic moment to nuclear magneton ratio.*/
	const double protonMagneticShieldingCorrectionUncertainty =						0.011e-6;					/**< \f$\sigma'_p \ (1)\f$ Uncertainty in proton magnetic shielding correction.*/
	const double protonMassUncertainty =											0.000000021e-27;			/**< \f$m_p \ (kg)\f$ Uncertainty in proton mass in kilograms.*/
	const double protonMassInJPercSquaredUncertainty =								0.000000018e-10;			/**< \f$m_p \ (\frac{J}{c^2})\f$ Uncertainty in proton mass in joules per speed of light squared.*/
	const double protonMassInMeVPercSquaredUncertainty =							0.0000058;					/**< \f$m_p \ (\frac{MeV}{c^2})\f$ Uncertainty in proton mass in megaelectron volts per speed of light squared.*/
	const double protonMassInuUncertainty =											0.000000000091;				/**< \f$m_p \ (u)\f$ Uncertainty in proton mass in unified atomic mass unit.*/
	const double protonMolarMassUncertainty =										0.000000000091e-3;			/**< \f$M_p \ (\frac{kg}{mol})\f$ Uncertainty in proton molar mass in kilograms per mole.*/
	const double protonMuonMassRatioUncertainty =									0.00000020;					/**< \f$\frac{m_p}{m_\mu} \ (1)\f$ Uncertainty in proton-muon mass ratio.*/
	const double protonNeutronMagneticMomentRatioUncertainty =						0.00000034;					/**< \f$\frac{\mu_p}{\mu_n} \ (1)\f$ Uncertainty in proton-neutron magnetic moment ratio.*/
	const double protonNeutronMassRatioUncertainty =								0.00000000051;				/**< \f$\frac{m_p}{m_n} \ (1)\f$ Uncertainty in proton-neutron mass ratio.*/
	const double protonrmsChargeRadiusUncertainty =									0.0061e-15;					/**< \f$r_p \ (m)\f$ Uncertainty in proton rms charge radius in meters.*/
	const double protonTauMassRatioUncertainty =									0.000048;					/**< \f$\frac{m_p}{m_\tau} \ (1)\f$ Uncertainty in proton-tau mass ratio.*/	
	#endif  
	/// @}
	
	/// @addtogroup QuantumOfCirculation 
	/// @{   
	const double quantumOfCirculation =												3.6369475486e-4;			/**< \f$\frac{h}{2 m_e} \ (\frac{m^2}{s})\f$ Quantum of circulation in meters squared per second.*/
	const double quantumOfCirculationTimes2 =										7.2738950972e-4;			/**< \f$\frac{h}{m_e} \ (\frac{m^2}{s})\f$ Quantum of circulation times 2.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double quantumOfCirculationUncertainty =									0.0000000017e-4;			/**< \f$\frac{h}{2 m_e} \ (\frac{m^2}{s})\f$ Uncertainty in quantum of circulation in meters squared per second.*/
	const double quantumOfCirculationTimes2Uncertainty =							0.0000000033e-4;			/**< \f$\frac{h}{m_e} \ (\frac{m^2}{s})\f$ Uncertainty in quantum of circulation times 2.*/
	#endif  
	/// @}
	
	/// @addtogroup RydbergConstant
	/// @{
	const double RydbergConstant =													10973731.568508;			/**< \f$R_\infty \ \ (\frac{1}{m})\f$ Rydberg constant in inverse meters.*/
	const double RydbergConstantTimescInHz =										3.289841960355e15;			/**< \f$R_\infty c \ (Hz)\f$ Rydberg constant times c in hertz.*/
	const double RydbergConstantTimeshcIneV =										13.605693009;				/**< \f$R_\infty hc \ (eV)\f$ Rydberg constant times hc in electron volts.*/
	const double RydbergConstantTimeshcInJ =										2.179872325e-18;			/**< \f$R_\infty hc \ (J)\f$ Rydberg constant times hc in joules.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double RydbergConstantUncertainty =										0.000065;					/**< \f$R_\infty \ \ (\frac{1}{m})\f$ Uncertainty in Rydberg constant in inverse meters.*/
	const double RydbergConstantTimescInHzUncertainty =								0.000000000019e15;			/**< \f$R_\infty c \ (Hz)\f$ Uncertainty in Rydberg constant times c in hertz.*/
	const double RydbergConstantTimeshcIneVUncertainty =							0.000000084;				/**< \f$R_\infty hc \ (eV)\f$ Uncertainty in Rydberg constant times hc in electron volts.*/
	const double RydbergConstantTimeshcInJUncertainty =								0.000000027e-18;			/**< \f$R_\infty hc \ (J)\f$ Uncertainty in Rydberg constant times hc in joules.*/
	#endif  
	/// @}
	
	/// @addtogroup SackurTetrodeConstant
	/// @{
	const double SackurTetrodeConstant =											-1.1517084;					/**< \f$\frac{S_0}{R} \ (1)\f$ Sackur-Tetrode constant at 1 K and 100 kPa.*/
	const double SackurTetrodeConstantatm =											-1.1648714;					/**< \f$\frac{S_0}{R} \ (1)\f$ Sackur-Tetrode constant at 1 K and 101.325 kPa (1atm).*/
	#ifdef NISTCONST_UNCERTAINTY
	const double SackurTetrodeConstantUncertainty =									0.0000014;					/**< \f$\frac{S_0}{R} \ (1)\f$ Uncertainty in Sackur-Tetrode constant at 1 K and 100 kPa.*/
	const double SackurTetrodeConstantatmUncertainty =								0.0000014;					/**< \f$\frac{S_0}{R} \ (1)\f$ Uncertainty in Sackur-Tetrode constant at 1 K and 101.325 kPa (1atm).*/
	#endif  
	/// @}
	
	/// @addtogroup SecondRadiationConstant
	/// @{
	const double secondRadiationConstant =											1.43877736e-2;				/**< \f$c_2 \ (m\ K)\f$ Second radiation constant in meters kelvin.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double secondRadiationConstantUncertainty =								0.00000083e-2;				/**< \f$c_2 \ (m\ K)\f$ Uncertainty in second radiation constant in meters kelvin.*/
	#endif  
	/// @}
	
	/// @addtogroup Helion
	/// @{
	const double shieldedHelionGyromagneticRatio =									2.037894585e8;				/**< \f$\gamma'_{^3\textrm{He}} \ (\frac{rad Hz}{T})\f$ Shielded helion gyromagnetic ratio in radian hertz per tesla. Note that the units of radians are added for clarity.*/
	const double shieldedHelionGyromagneticRatioOver2Pi =							32.43409966;				/**< \f$\frac{\gamma'_{^3\textrm{He}}}{2 \pi} \ (\frac{rad MHz}{T})\f$ Shielded helion gyromagnetic ratio over 2 pi in radian megaahertz per tesla. Note that the units of radians are added for clarity.*/
	const double shieldedHelionMagneticMoment =										-1.074553080e-26;			/**< \f$\mu'_{^3\textrm{He}} \ (\frac{J}{T})\f$ Shielded helion magnetic moment in joules per tesla.*/
	const double shieldedHelionMagneticMomentToBohrMagnetonRatio =					-1.158671471e-3;			/**< \f$\frac{\mu'_{^3\textrm{He}}}{\mu_B} \ (1)\f$ Shielded helion magnetic moment to Bohr magneton ratio.*/
	const double shieldedHelionMagneticMomentToNuclearMagnetonRatio =				-2.127497720;				/**< \f$\frac{\mu'_{^3\textrm{He}}}{\mu_N} \ (1)\f$ Shielded helion magnetic moment to nuclear magneton ratio.*/
	const double shieldedHelionToProtonMagneticMomentRatio =						-0.7617665603;				/**< \f$\frac{\mu'_{^3\textrm{He}}}{\mu_p} \ (1)\f$ Shielded helion to proton magnetic moment ratio.*/
	const double shieldedHelionToShieldedProtonMagneticMomentRatio =				-0.7617861313;				/**< \f$\frac{\mu'_{^3\textrm{He}}}{\mu'_p} \ (1)\f$ Shielded helion to shielded proton magnetic moment ratio.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double shieldedHelionGyromagneticRatioUncertainty =						0.000000027e8;				/**< \f$\gamma'_{^3\textrm{He}} \ (\frac{rad Hz}{T})\f$ Uncertainty in shielded helion gyromagnetic ratio in radian hertz per tesla. Note that the units of radians are added for clarity.*/
	const double shieldedHelionGyromagneticRatioOver2PiUncertainty =				0.00000043;					/**< \f$\frac{\gamma'_{^3\textrm{He}}}{2 \pi} \ (\frac{rad MHz}{T})\f$ Uncertainty in shielded helion gyromagnetic ratio over 2 pi in radian megaahertz per tesla. Note that the units of radians are added for clarity.*/
	const double shieldedHelionMagneticMomentUncertainty =							0.000000014e-26;			/**< \f$\mu'_{^3\textrm{He}} \ (\frac{J}{T})\f$ Uncertainty in shielded helion magnetic moment in joules per tesla.*/
	const double shieldedHelionMagneticMomentToBohrMagnetonRatioUncertainty =		0.000000014e-3;				/**< \f$\frac{\mu'_{^3\textrm{He}}}{\mu_B} \ (1)\f$ Uncertainty in shielded helion magnetic moment to Bohr magneton ratio.*/
	const double shieldedHelionMagneticMomentToNuclearMagnetonRatioUncertainty =	0.000000025;				/**< \f$\frac{\mu'_{^3\textrm{He}}}{\mu_N} \ (1)\f$ Uncertainty in shielded helion magnetic moment to nuclear magneton ratio.*/
	const double shieldedHelionToProtonMagneticMomentRatioUncertainty =				0.0000000092;				/**< \f$\frac{\mu'_{^3\textrm{He}}}{\mu_p} \ (1)\f$ Uncertainty in shielded helion to proton magnetic moment ratio.*/
	const double shieldedHelionToShieldedProtonMagneticMomentRatioUncertainty =		0.0000000033;				/**< \f$\frac{\mu'_{^3\textrm{He}}}{\mu'_p} \ (1)\f$ Uncertainty in shielded helion to shielded proton magnetic moment ratio.*/
	#endif  
	/// @}
	
	/// @addtogroup Proton
	/// @{
	const double shieldedProtonGyromagneticRatio =									2.675153171e8;				/**< \f$\gamma'_p \ (\frac{rad Hz}{T})\f$ Shielded proton gyromagnetic ratio in radian hertz per tesla. Note that the units of radians are added for clarity.*/
	const double shieldedProtonGyromagneticRatioOver2Pi =							42.57638507;				/**< \f$\frac{\gamma'_p}{2 \pi} \ (\frac{rad MHz}{T})\f$ Shielded proton gyromagnetic ratio over 2 pi in radian megaahertz per tesla. Note that the units of radians are added for clarity.*/
	const double shieldedProtonMagneticMoment =										1.410570547e-26;			/**< \f$\mu'_p \ (\frac{J}{T})\f$ Shielded proton magnetic moment in joules per tesla.*/
	const double shieldedProtonMagneticMomentToBohrMagnetonRatio =					1.520993128e-3;				/**< \f$\frac{\mu'_p}{\mu_B} \ (1)\f$ Shielded proton magnetic moment to Bohr magneton ratio.*/
	const double shieldedProtonMagneticMomentToNuclearMagnetonRatio =				2.792775600;				/**< \f$\frac{\mu'_p}{\mu_N} \ (1)\f$ Shielded proton magnetic moment to nuclear magneton ratio.*/
	
	#ifdef NISTCONST_UNCERTAINTY
	const double shieldedProtonGyromagneticRatioUncertainty =						0.000000033e8;				/**< \f$\gamma'_p \ (\frac{rad Hz}{T})\f$ Uncertainty in shielded proton gyromagnetic ratio in radian hertz per tesla. Note that the units of radians are added for clarity.*/
	const double shieldedProtonGyromagneticRatioOver2PiUncertainty =				0.00000053;					/**< \f$\frac{\gamma'_p}{2 \pi} \ (\frac{rad MHz}{T})\f$ Uncertainty in shielded proton gyromagnetic ratio over 2 pi in radian megaahertz per tesla. Note that the units of radians are added for clarity.*/
	const double shieldedProtonMagneticMomentUncertainty =							0.000000018e-26;			/**< \f$\mu'_p \ (\frac{J}{T})\f$ Uncertainty in shielded proton magnetic moment in joules per tesla.*/
	const double shieldedProtonMagneticMomentToBohrMagnetonRatioUncertainty =		0.000000017e-3;				/**< \f$\frac{\mu'_p}{\mu_B} \ (1)\f$ Uncertainty in shielded proton magnetic moment to Bohr magneton ratio.*/
	const double shieldedProtonMagneticMomentToNuclearMagnetonRatioUncertainty =	0.000000030;				/**< \f$\frac{\mu'_p}{\mu_N} \ (1)\f$ Uncertainty in shielded proton magnetic moment to nuclear magneton ratio.*/
	#endif  
	/// @}
    
	/// @addtogroup SpeedOfLight
	/// @{    
	const double speedOfLightInVacuum =												299792458.0;				/**< \f$c \ (\frac{m}{s})\f$ Speed of light in vacuum in meters per second.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double speedOfLightInVacuumUncertainty =									0.0;						/**< \f$c \ (\frac{m}{s})\f$ Uncertainty in speed of light in vacuum in meters per second. Note should be 0.0 since it is a defined value.*/
	#endif  
	/// @}
	
	/// @addtogroup GravityAcceleration
	/// @{    
	const double standardAccelerationOfGravity =									9.80665;					/**< \f$g_n \ (\frac{m}{s^2)\f$ Standard acceleration of gravity in meters per second squared.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double standardAccelerationOfGravityUncertainty =							0.0;						/**< \f$g_n \ (\frac{m}{s^2)\f$ Uncertainty in standard acceleration of gravity in meters per second squared. Note should be 0.0 since it is a defined value.*/
	#endif  
	/// @}
	
	/// @addtogroup StandardAtmosphere
	/// @{    
	const double standardAtmosphere =												101325.0;					/**< \f$atm \ (Pa)\f$ Standard atmosphere in pascals.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double standardAtmosphereUncertainty =									0.0;						/**< \f$atm \ (Pa)\f$ Uncertainty in standard atmosphere in pascals. Note should be 0.0 since it is a defined value.*/
	#endif  
	/// @}
	
	/// @addtogroup StandardStatePressure
	/// @{    
	const double standardStatePressure =											100000.0;					/**< \f$ssp \ (Pa)\f$ Standard-state pressure in pascals.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double standardStatePressureUncertainty =									0.0;						/**< \f$ssp \ (Pa)\f$ Uncertainty in standard-state pressure in pascals. Note should be 0.0 since it is a defined value.*/
	#endif  
	/// @}

	/// @addtogroup StefanBoltzmannConstant
	/// @{    
	const double StefanBoltzmannConstant =											5.670367e-8;				/**< \f$\sigma \ (\frac{W}{m^2 K^4})\f$ Stefan-Boltzmann constant in watts per meter squared kelvin to the 4th.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double StefanBoltzmannConstantUncertainty =								0.000013e-8;				/**< \f$\sigma \ (\frac{W}{m^2 K^4})\f$ Uncertainty in Stefan-Boltzmann constant in watts per meter squared kelvin to the 4th.*/
	#endif  
	/// @}
	
	
	/// @addtogroup Tau
	/// @{
	const double tauComptonWavelength =												0.697787e-15; 				/**< \f$\lambda_{C,\tau} \ (m)\f$ Tau Compton wavelength in meters.*/ 
	const double tauComptonWavelengthOver2Pi =										0.111056e-15;        		/**< \f$\lambdabar_{C,\tau} \ (m)\f$ Tau Compton wavelength over 2 pi in meters.*/ 
	const double tauElectronMassRatio =												3477.15;                  	/**< \f$m_\tau/m_e \ (1)\f$ Tau-electron mass ratio.*/ 
	const double tauMass =															3.16747e-27;           		/**< \f$m_\tau \ (kg)\f$ Tau mass in kilograms.*/ 
	const double tauMassInJPercSquared =                                 			2.84678e-10;				/**< \f$m_\tau \ (\frac{J}{c^2})\f$ Tau mass in joules per speed of light squared.*/ 
	const double tauMassInMeVPercSquared =                          				1776.82;					/**< \f$m_\tau \ (\frac{MeV}{c^2})\f$ Tau mass in megaelectron volts per speed of light squared.*/ 
	const double tauMassInu =														1.90749;					/**< \f$m_\tau \ (u)\f$ Tau mass in unified atomic mass units.*/ 
	const double tauMolarMass =														1.90749e-3;					/**< \f$M_\tau \ (\frac{kg}{mol})\f$ Tau molar mass in kilograms per mole.*/ 
	const double tauMuonMassRatio =													16.8167;					/**< \f$m_\tau/m_\mu \ (1)\f$ Tau-muon mass ratio.*/ 
	const double tauNeutronMassRatio =												1.89111;					/**< \f$m_\tau/m_n \ (1)\f$ Tau-neutron mass ratio.*/ 
	const double tauProtonMassRatio	=												1.89372;					/**< \f$m_\tau/m_p \ (1)\f$ Tau-proton mass ratio.*/ 
	
	#ifdef NISTCONST_UNCERTAINTY
	const double tauComptonWavelengthUncertainty =									0.000063e-15;				/**< \f$\lambda_{C,\tau} \ (m)\f$ Uncertainty in tau Compton wavelength in meters.*/ 
	const double tauComptonWavelengthOver2PiUncertainty =							0.000010e-15; 				/**< \f$\lambdabar_{C,\tau} \ (m)\f$ Uncertainty in tau Compton wavelength over 2 pi in meters.*/ 
	const double tauElectronMassRatioUncertainty =									0.31;                     	/**< \f$m_\tau/m_e \ (1)\f$ Uncertainty in tau-electron mass ratio.*/ 
	const double tauMassUncertainty =												0.00029e-27;        		/**< \f$m_\tau \ (kg)\f$ Uncertainty in tau mass in kilograms.*/ 
	const double tauMassInJPercSquaredUncertainty =									0.00026e-10; 				/**< \f$m_\tau \ (\frac{J}{c^2})\f$ Uncertainty in tau mass in joules per speed of light squared.*/ 
	const double tauMassInMeVPercSquaredUncertainty =								0.16;     					/**< \f$m_\tau \ (\frac{MeV}{c^2})\f$ Uncertainty in tau mass in megaelectron volts per speed of light squared.*/ 
	const double tauMassInuUncertainty =											0.00017;               		/**< \f$m_\tau \ (u)\f$ Uncertainty in tau mass in unified atomic mass units.*/ 
	const double tauMolarMassUncertainty =											0.00017e-3;             	/**< \f$M_\tau \ (\frac{kg}{mol})\f$ Uncertainty in tau molar mass in kilograms per mole.*/ 
	const double tauMuonMassRatioUncertainty =										0.0015;                   	/**< \f$m_\tau/m_\mu \ (1)\f$ Uncertainty in tau-muon mass ratio.*/ 
	const double tauNeutronMassRatioUncertainty =									0.00017;                 	/**< \f$m_\tau/m_n \ (1)\f$ Uncertainty in tau-neutron mass ratio.*/ 
	const double tauProtonMassRatioUncertainty =									0.00017;       				/**< \f$m_\tau/m_p \ (1)\f$ Uncertainty in tau-proton mass ratio.*/ 	
	#endif  
	/// @}
	
    /// @addtogroup Thomson
	/// @{    
	const double ThomsonCrossSection =												0.66524587158e-28;			/**< \f$\sigma_e \ (m^2)\f$ Thomson cross section in meters squared.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double ThomsonCrossSectionUncertainty =									0.00000000091e-28;			/**< \f$\sigma_e \ (m^2)\f$ Uncertainty in Thomson cross section in meters squared.*/
	#endif  
	/// @}	

	/// @addtogroup Triton
	/// @{
	const double tritonElectronMassRatio =											5496.92153588;				/**< \f$m_{\textrm{T}}/m_e \ (1)\f$ Triton-electron mass ratio.*/
	const double tritongFactor =													5.957924920;				/**< \f$g_{\textrm{T}} \ (1)\f$ Triton g factor.*/       
	const double tritonMagneticMoment =												1.504609503e-26;			/**< \f$\mu_{\textrm{T}} \ (\frac{J}{T})\f$ Triton magnetic moment in joules per tesla.*/
	const double tritonMagneticMomentToBohrMagnetonRatio =							1.6223936616e-3;			/**< \f$\mu_{\textrm{T}}/\mu_B \ (1)\f$ Triton magnetic moment to Bohr magneton ratio.*/
	const double tritonMagneticMomentToNuclearMagnetonRatio =						2.978962460;				/**< \f$\mu_{\textrm{T}}/\mu_N \ (1)\f$ Triton magnetic moment to nuclear magneton ratio*/
	const double tritonMass =														5.007356665e-27;			/**< \f$m_{\textrm{T}} \ (kg)\f$ Triton mass in kilograms.*/ 
	const double tritonMassInJPercSquared =											4.500387735e-10;			/**< \f$m_{\textrm{T}} \ (\frac{J}{c^2})\f$ Triton mass in joules per speed of light squared.*/ 
	const double tritonMassInMeVPercSquared =										2808.921112;				/**< \f$m_{\textrm{T}} \ (\frac{MeV}{c^2})\f$ Triton mass in megaelectron volts per speed of light squared.*/ 
	const double tritonMassInu =													3.01550071632;				/**< \f$m_{\textrm{T}} \ (u)\f$ Triton mass in unified atomic mass units. */ 
	const double tritonMolarMass =													3.01550071632e-3;			/**< \f$M_{\textrm{T}} \ (\frac{kg}{mol})\f$ Triton molar mass in kilograms per mole.*/ 
	const double tritonProtonMassRatio =											2.99371703348;				/**< \f$m_{\textrm{T}}/m_p \ (1)\f$ Triton-proton mass ratio.*/ 
	
	#ifdef NISTCONST_UNCERTAINTY
	const double tritonElectronMassRatioUncertainty =								0.00000026;					/**< \f$m_{\textrm{T}}/m_e \ (1)\f$ Uncertainty in triton-electron mass ratio.*/
	const double tritongFactorUncertainty =											0.000000028;				/**< \f$g_{\textrm{T}} \ (1)\f$ Uncertainty in triton g factor.*/       
	const double tritonMagneticMomentUncertainty =									0.000000012e-26;			/**< \f$\mu_{\textrm{T}} \ (\frac{J}{T})\f$ Uncertainty in triton magnetic moment in joules per tesla.*/
	const double tritonMagneticMomentToBohrMagnetonRatioUncertainty =				0.0000000076e-3;			/**< \f$\mu_{\textrm{T}}/\mu_B \ (1)\f$ Uncertainty in triton magnetic moment to Bohr magneton ratio.*/
	const double tritonMagneticMomentToNuclearMagnetonRatioUncertainty =			0.000000014;				/**< \f$\mu_{\textrm{T}}/\mu_N \ (1)\f$ Uncertainty in triton magnetic moment to nuclear magneton ratio.*/
	const double tritonMassUncertainty =											0.000000062e-27;			/**< \f$m_{\textrm{T}} \ (kg)\f$ Uncertainty in triton mass in kilograms.*/ 
	const double tritonMassInJPercSquaredUncertainty =								0.000000055e-10;			/**< \f$m_{\textrm{T}} \ (\frac{J}{c^2})\f$ Uncertainty in triton mass in joules per speed of light squared.*/ 
	const double tritonMassInMeVPercSquaredUncertainty =							0.000017; 					/**< \f$m_{\textrm{T}} \ (\frac{MeV}{c^2})\f$ Uncertainty in triton mass in megaelectron volts per speed of light squared.*/ 
	const double tritonMassInuUncertainty =											0.00000000011;				/**< \f$m_{\textrm{T}} \ (u)\f$ Uncertainty in triton mass in unified atomic mass units.*/ 
	const double tritonMolarMassUncertainty =										0.00000000011e-3;			/**< \f$M_{\textrm{T}} \ (\frac{kg}{mol})\f$ Uncertainty in triton molar mass in kilograms per mole.*/ 
	const double tritonProtonMassRatioUncertainty =									0.00000000022;				/**< \f$m_{\textrm{T}}/m_p \ (1)\f$ Uncertainty in triton-proton mass ratio.*/ 
	#endif  
	/// @}	
	
	/// @addtogroup UnifiedAtomicMassUnit
	/// @{
	const double unifiedAtomicMassUnit =											1.660539040e-27;			/**< \f$u \ (kg)\f$ Unified atomic mass unit in kilograms.*/ 
	#ifdef NISTCONST_UNCERTAINTY
	const double unifiedAtomicMassUnitUncertainty =									0.000000020e-27;			/**< \f$u \ (kg)\f$ Uncertainty in unified atomic mass unit in kilograms.*/ 
	#endif  
	/// @}	
	
	/// @addtogroup vonKlitzingConstant
	/// @{
	const double vonKlitzingConstant =												25812.8074555;				/**< \f$R_K \ (\Omega)\f$ von Klitzing constant in ohms.*/
	#ifdef NISTCONST_UNCERTAINTY
	const double vonKlitzingConstantUncertainty =									0.0000059;           		/**< \f$R_K \ (\Omega)\f$ Uncertainty in von Klitzing constant in ohms.*/
	#endif  
	/// @}	
	
	/// @addtogroup WeakMixingAngle 
	/// @{
	const double weakMixingAngle =													0.2223;						/**< \f$sin^2 \theta_W \ (1)\f$ Weak mixing angle.*/              
	#ifdef NISTCONST_UNCERTAINTY
	const double weakMixingAngleUncertainty =										0.0021;						/**< \f$sin^2 \theta_W \ (1)\f$ Uncertainty in weak mixing angle.*/        
	#endif  
	/// @}	
	
	/// @addtogroup WienDisplacement 
	/// @{ 
	const double WienFrequencyDisplacementLawConstant =								5.8789238e10;				/**< \f$b' \ (\frac{Hz}{K})\f$ Wien frequency displacement law constant in hertz per kelvin.*/ 
	const double WienWavelengthDisplacementLawConstant =							2.8977729e-3;				/**< \f$b \ (m K)\f$ Wien wavelength displacement law constant in meters kelvin.*/ 
	
	#ifdef NISTCONST_UNCERTAINTY
	const double WienFrequencyDisplacementLawConstantUncertainty =					0.0000034e10;				/**< \f$b' \ (\frac{Hz}{K})\f$ Uncertainty in Wien frequency displacement law constant in hertz per kelvin.*/ 
	const double WienWavelengthDisplacementLawConstantUncertainty =					0.0000017e-3;				/**< \f$b \ (m K)\f$ Uncertainty in Wien wavelength displacement law constant in meters kelvin.*/ 
	#endif  
	/// @}	

} //namespace NISTConst




/*
speed of light
c

common names characteristic impedance of vacuum z0
e0
*/

