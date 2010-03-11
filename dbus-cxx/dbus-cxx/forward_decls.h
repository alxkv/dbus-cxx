/***************************************************************************
 *   Copyright (C) 2010 by Rick L. Vinyard, Jr.                            *
 *   rvinyard@cs.nmsu.edu                                                  *
 *                                                                         *
 *   This file is part of the dbus-cxx library.                            *
 *                                                                         *
 *   The dbus-cxx library is free software; you can redistribute it and/or *
 *   modify it under the terms of the GNU General Public License           *
 *   version 3 as published by the Free Software Foundation.               *
 *                                                                         *
 *   The dbus-cxx library is distributed in the hope that it will be       *
 *   useful, but WITHOUT ANY WARRANTY; without even the implied warranty   *
 *   of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU   *
 *   General Public License for more details.                              *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this software. If not see <http://www.gnu.org/licenses/>.  *
 ***************************************************************************/
#ifndef DBUSCXXFORWARD_DECLS_H
#define DBUSCXXFORWARD_DECLS_H

#include <dbus-cxx/types.h>

namespace DBus {

  class Connection;

  class Interface;
  
  class Object;

  template <class T_return, class T_arg1 = nil,class T_arg2 = nil,class T_arg3 = nil,class T_arg4 = nil,class T_arg5 = nil,class T_arg6 = nil,class T_arg7 = nil>
  class Method;

};

#endif