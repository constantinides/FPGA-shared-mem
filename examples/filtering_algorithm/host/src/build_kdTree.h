/**********************************************************************
* Felix Winterstein, Imperial College London, 2016
*
* File: build_kdTree.h
*
* Revision 1.01
* Additional Comments: distributed under an Apache-2.0 license, see LICENSE
*
**********************************************************************/

#ifndef BUILD_KDTREE_H
#define	BUILD_KDTREE_H

#ifdef	__cplusplus
extern "C" {
#endif

#include "my_util.hpp" 

kdTree_t* buildkdTree(data_type *data_points, uint *idx, uint n, data_type *bnd_lo, data_type *bnd_hi);
void deletekdTree(kdTree_t* u);

#ifdef	__cplusplus
}
#endif


#endif	/* BUILD_KDTREE_H */

