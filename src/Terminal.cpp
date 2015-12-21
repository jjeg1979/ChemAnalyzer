/*! \brief Brief description.
 *         Brief description continued.
 *
 *  Detailed description starts here.
 */
 
#include "../include/Terminal.h"

namespace Terminales {
	Lower_case::Lower_case( string s )
	: lc{ s }
	{
		if ( !is_valid( s ) ) throw InvalidTerminal{};
	}
	
	const Lower_case& default_lower_case( )
	{
		static Lower_case Element{ "is" };
		return Element;
	}
	
	Lower_case::Lower_case()
	: lc{ default_lower_case().lower_case() }
	{
		
	}
	
	void Lower_case::add_lc( string s )
	{
		if ( is_valid( s ) )
			lc = s;
		else
			throw InvalidTerminal{};
	}
    
	bool is_valid( string s )
	{
        Lower_case *l;
       	// Elements have num_char characters at maximum
		if ( s.size() > l->max_char() ) return false;
		
		// See if all elements are alphabetic characters
		for ( char c : s )
		{
			if ( !isalpha( c ) ) return false;			
		}
		// If all checks are ok must be valid
		return true;
	}
	
	bool operator==( const Lower_case& lc1, const Lower_case& lc2 )
	{
		return ( lc1.lower_case() == lc2.lower_case() );
	}
	
	bool operator!=( const Lower_case& lc1, const Lower_case& lc2 )
	{
		return !( lc1 == lc2 );
	}
	
	istream& operator>>( istream& is, Lower_case& lc )
	{
		string s;
		is >> s;
		
		if( !is ) return is;
		
		if ( !is_valid( s ) )	// Oops: not a valid char
		{
			is.clear( ios_base::failbit );	// set the failbit
			return is;
		}
		
		lc.add_lc( s );			// Update lc;
		return is;
	}
	
	ostream& operator<<( ostream& os, const Lower_case& lc )
	{
		return os << lc.lower_case() << ' ';
	}
	
}