/*! \brief Brief description.
 *         Brief description continued.
 *
 *  Detailed description starts here.
 */
 
#include "Terminal.h"

namespace Terminales {
	Lower_case::Lower_case( char c )
	: lc{ c }
	{
		if !is_char( c ) throw InvalidTerminal{};
	}
	
	const Lower_case& default_lower_case( )
	{
		static Lower_case Carbon{ 'C' };
		return Carbon;
	}
	Lower_case::Lower_case()
	:lc{ default_lower_case().lc }
	{
		
	}
	
	void Lower_case::add_lc( char c )
	{
		if is_char( c )
			lc = c;
		else
			throw InvalidTerminal{};
	}
	
	bool is_char( char c )
	{
		if !isalpha( c ) return false;
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
		char ch;
		is >> ch;
		
		if( !is ) return is;
		
		if !( isalpha( c ) )	// Oops: not a valid char
		{
			is.clear( ios_base::failbit );	// set the failbit
			return is;
		}
		
		lc = Lower_case( c );			// Update lc;
		return is;
	}
	
	ostream& operator<<( ostream& os, const Lower_case& lc )
	{
		return os << lc.lower_case() << ' ';
	}
	
}