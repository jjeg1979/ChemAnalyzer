/*! \brief Terminal classes definitionn.
 *         Lower_case and Upper_case.
 *
 *  This file is the header file for the terminal classes implementation.
 *  Both belong to the implementation of a Chemical Reaction Analyzer Project based on the
 *  grammar:
 *  
 * ;Reacción:
 *    	Reactivo
 *   	Reacción "-" Reactivo
 *   	Reacción "=" Reactivo
 *   
 *	;Reactivo:
 *   	Molécula
 *   	Reactivo "+" Molécula
 *   
 *	;Molécula:
 *   	Átomo
 *   	ÁtomoMolecula
 *    
 * ;Átomo:
 *  	Mayúscula
 *  	MayúsculaMinúscula
 * 		MayúsculaMinúsculaMinúscula
 *
 * ;Mayúscula:
 *  	"A"-"Z"
 *
 * ;Minúscula:
 * 		"a"-"z"
 *
 */
 
#include <iostream>
using namespace std;

namespace Terminales {
	class Lower_case {
		public:
			// class to be thrown as exception for terminals
			class InvalidTerminal{};
			
			// Constructors	 
			Lower_case( char );		// check for valid Lower_case and initialite
			Lower_case();
			// the default copy operations are fine
			
			// non-modifying operations
			char lower_case() const { return lc; }
			
			// modifying operations:
			void add_lc( char );
			
		private:
			char lc;
	}; // end of class definition Lower_case
	
	// Auxiliary operations
	bool is_char( char );		// true for alphabetic chars
	
	// Operators for comparing objects of Teminal types
	bool operator==( const Lower_case&, const Lower_case& );
	bool operator!=( const Lower_case&, const Lower_case& );
	
	// Operators for reading in/printing out terminal types
	istream& operator>>( istream&, Lower_case& );
	ostream& operator<<( ostream& , const Lower_case& );
	 
	
} // end of namespace Terminales