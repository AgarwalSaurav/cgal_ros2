// Copyright (c) 2014  GeometryFactory (France).  All rights reserved.
//
// This file is part of CGAL (www.cgal.org)
//
// $URL: https://github.com/CGAL/cgal/blob/v5.6/BGL/include/CGAL/boost/graph/dijkstra_shortest_paths.h $
// $Id: dijkstra_shortest_paths.h 5f3e3b2 2022-05-05T08:46:11+01:00 Andreas Fabri
// SPDX-License-Identifier: LGPL-3.0-or-later OR LicenseRef-Commercial
//
//
// Author(s)     : Sebastien Loriot


#ifndef CGAL_BOOST_GRAPH_DIJKSTRA_SHORTEST_PATHS_H
#define CGAL_BOOST_GRAPH_DIJKSTRA_SHORTEST_PATHS_H

// This will push/pop a VC++ warning
#include <CGAL/Named_function_parameters.h>

#if defined(BOOST_MSVC)
#  pragma warning(push)
#  pragma warning(disable:4172) // Address warning inside boost named parameters
#endif

#include <boost/graph/dijkstra_shortest_paths.hpp>

#if defined(BOOST_MSVC)
#  pragma warning(pop)
#endif

#endif // CGAL_BOOST_GRAPH_DIJKSTRA_SHORTEST_PATHS_H
