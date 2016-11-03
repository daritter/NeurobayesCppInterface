#ifndef NB_PARAM_HH 
#define NB_PARAM_HH 

//---- maximum allowed layers and nodes per layer 
const int NB_MAXLAYER=3;

const int NB_MAXNODE= 100; 

//     dimension for TABX arrays
const int NB_NVALUE = 100 + 1 ;
//     dimension for TABY array
const int NB_NIVALUE = 200  ;
//      maximum number of levels for shape reconstruction 
//
const int NB_LEVMAX=NB_MAXNODE;   

const int NB_MAXDIM = NB_MAXNODE + 3 + NB_MAXNODE;
//     dimension for postprocessing const intermediate results
const int NB_POSTPROC=1000; 

//     max. number of parameters for individual variable preproc.
const int NB_MaxPreproPar=10;

//     max. number of words stored in a map
const int NB_MaxCMapWords=500;

//    dimension of array for regularised spline fit
const int NB_nRsfBins=100;
//    max. number of keys in a map
const int NB_MaxMapKey=500;

//    number of random numbers generated in one pass by NB_RNDM3
const int NB_RANDNO=1000;

//     max. dimension for marginal sum method
const int NB_MaxMargDim = 5;
//     max. number of bins per variable for marginal sum method
const int NB_MaxMargBins = NB_MaxMapKey+NB_nRsfBins;

//     maximum number of delta functions of target
const int NB_MAXTDELTA = 10;

//    relevant for boost: if a variable has more than NB_SPLIT_CLASS values the variable will not be split in binary vars
const int NB_SPLIT_CLASS=10;

// for a check in expert
const int NB_DATE_BOOST=20091026;
// for a check in expert
const int NB_DATE_BOOST2=20100722;
const int NB_DATE_BOOST3=20101019;

const int NB_DATE_DEFFT=20100318;
//     maximum size of expertise
const int NB_NEXPERTISE= NB_MAXNODE*NB_MAXNODE*(NB_MAXLAYER+2)
          + NB_MAXNODE*(3*NB_NVALUE+NB_MaxPreproPar
                        +2*NB_MaxMapKey+3*NB_nRsfBins+8)
          + NB_MaxMargDim*(NB_MaxMargBins+2)
          + NB_MAXTDELTA*2
          + NB_NIVALUE
          + 35;
//NB_MAXNODE*NB_MAXNODE*(NB_MAXLAYER+1)  
//  + NB_MAXNODE*(2 * NB_NVALUE + NB_MaxPreproPar
//		+ 2 * NB_MaxMapKey + 2 * NB_nRsfBins + 6)   
//  + NB_MaxMargDim * (NB_MaxMargDim + 2)
//  + NB_MAXTDELTA * 2
//  + NB_NIVALUE
//  + 35;

#endif
