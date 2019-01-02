/* Z Kit - classes/OpaqueFunctionPointer.hpp
 _____  _______________
/_   /_/  -_/_   _/  _ |
 /____/\___/ /__//___/_| Kit
Copyright (C) 2006-2019 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef _Z_classes_OpaqueFunctionPointer_HPP_
#define _Z_classes_OpaqueFunctionPointer_HPP_

#include <Z/macros/language.hpp>


namespace Zeta {struct OpaqueFunctionPointer {
	void (* function)();

	template <class T>
	Z_INLINE OpaqueFunctionPointer(T function)
	: function((void (*)())function) {}

	template <class T>
	Z_INLINE operator T() const {return (T)function;}
};}


#endif // _Z_classes_OpaqueFunctionPointer_HPP_
