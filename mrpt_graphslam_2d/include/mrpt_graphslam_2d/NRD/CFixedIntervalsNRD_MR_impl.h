/* +---------------------------------------------------------------------------+
   |                     Mobile Robot Programming Toolkit (MRPT)               |
   |                          http://www.mrpt.org/                             |
   |                                                                           |
   | Copyright (c) 2005-2016, Individual contributors, see AUTHORS file        |
   | See: http://www.mrpt.org/Authors - All rights reserved.                   |
   | Released under BSD License. See details in http://www.mrpt.org/License    |
   +---------------------------------------------------------------------------+ */

#ifndef CFIXEDINTERVALSNRD_MR_IMPL_H
#define CFIXEDINTERVALSNRD_MR_IMPL_H

namespace mrpt { namespace graphslam { namespace deciders {

template<class GRAPH_T>
CFixedIntervalsNRD_MR<GRAPH_T>::CFixedIntervalsNRD_MR() {
	this->initializeLoggers("CFixedIntervalsNRD_MR");
}

} } } // end of namespaces



#endif /* end of include guard: CFIXEDINTERVALSNRD_MR_IMPL_H */

