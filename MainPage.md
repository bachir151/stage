
feel is a unified C++ implementation of Galerkin methods (finite and
spectral element methods) in 1D, 2D And 3D to solve partial
differential equations.   

##Objectives

The objectives of this framework is quite ambitious; ambitions which
could be express in various ways such as :   
- the creation of a versatile mathematical kernel solving easily
  problems using different techniques thus allowing testing and
  comparing methods, e.g. cG versus dG,   
- the creation of a '''small''' and '''manageable''' library which
  shall nevertheless encompass a wide range of numerical methods and
  techniques,   
- build mathematical software that follows closely the mathematical
 abstractions associated with partial differential equations
 (PDE)(which is often not the case, for example the design
 could be physics oriented)  
- the creation of a library entirely in ''C++'' allowing to create
 ''C++'' complex and typically multi-physics applications such as
 fluid-structure interaction or mass transport in
 haemodynamics (the rationale being that these applications
 are computing intensive and the use of an interpreted language such
 as python would not be satisfying though in many simpler cases that
 would simplify and accelerate the development.)   
 
##Organisation of this manual

This manual is organized as follows:   
- [QuickStart](http://www.feelpp.org/docs/master/GettingStarted.html)where we provide various standard PDE solvers to start
  with   
-  [A Step by Step Tutorial](http://www.feelpp.org/docs/master/Tutorial.html) where we dive step by step into Feel++   
-  [Programming Environment](http://www.feelpp.org/docs/master/ProgEnv.html)which includes instructions for installation from sources or
  from Debian/Ubuntu and MacOSX   
-  [Quick Reference](http://www.feelpp.org/docs/master/QuickRef.html) which describes the various components of Feel++ applications   

##Credits

See the [Credits](http://www.feelpp.org/docs/master/Credits.html) page for proper credits attribution.   

##FEEL Consortium

Feel++ was initially developed at École Polytechnique Fédérale de
Lausanne(Suisse) and is now a joint effort between Université de
Strasbourg, Université Joseph Fourier (Grenoble), University of
Coimbra (Portugal), CNRS and [CeMoSiS](http://www.cemosis.fr/).   
[Unistra](http://www.unistra.fr/)   
[Cemosis](http://www.cemosis.fr/)   
[UjF](http://www.ujf-grenoble.fr/ )   
[UC](http://www.uc.pt/)   
[Imati](http://www.imati.cnr.it/)   

##Current Sponsors   
[ARN](http://www.agence-nationale-recherche.fr/)   
[Amies](http://agence-maths-entreprises.fr/)  
[Labex Irma](http://labex-irmia.u-strasbg.fr/)   

##Former Sponsors
[CLUSTER ISLE](http://cluster-isle.grenoble-inp.fr/)   
RHONE ALPES[](http://www.rhonealpes.fr/)
[GNU](http://www.gnu.org/licenses/lgpl-2.1.html)
