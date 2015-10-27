/*! \brief Terminal classes definitionn.
 *         Lower_case and Upper_case.
 *
 *  This file is the header file for the terminal classes implementation.
 *  Both belong to the implementation of a Chemical Reaction Analyzer Project based on the
 *  grammar:
 *  
 * ;Reaction
 *
 *
 *
 *
 *
 */
 
#include <iostream>

namespace Terminales {
	class Lower_case {
		public:
			Lower_case( char );		// check for valid Lower_case and initialite
			Lower_case();
			// the default copy operations are fine
			
			// non-modifying operations
			char lower_case() const { return lc; }
			
			// modifying operations:
			void add_lc( char );
			
		private:
			char lc;
	};
	
	// Auxiliary operations
	bool is_char( char );		// true for alphabetic chars
	
	bool operator==( const char&, const char& );
	bool operator!=( const char&, const char& );
	
	
}