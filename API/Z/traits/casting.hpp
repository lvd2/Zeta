/* Zeta API - Z/traits/casting.hpp
 ______ ____________  ___
|__   /|  ___|__  __|/   \
  /  /_|  __|  |  | /  *  \
 /_____|_____| |__|/__/ \__\
Copyright (C) 2006-2022 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef Z_traits_casting_HPP
#define Z_traits_casting_HPP

#include <Z/macros/language.hpp>

namespace Zeta {
	template <class to> struct Cast {typedef to type;};

#	if Z_DIALECT_HAS(CPP11, TYPE_ALIAS_TEMPLATE)
		template <class to> using cast = to;
#	endif

	template <class from> struct auto_cast {
		const from &value;

		explicit Z_CT(CPP11) auto_cast(const from &value_) Z_NOTHROW
		: value {value_} {}

		template <class to>
		Z_CT(CPP11) operator to() const Z_NOTHROW
			{return to(value);}
	};
}

#endif // Z_traits_casting_HPP
