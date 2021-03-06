/*******************************************************
 * Copyright (c) 2014, ArrayFire
 * All rights reserved.
 *
 * This file is distributed under 3-clause BSD license.
 * The complete license agreement can be obtained at:
 * http://arrayfire.com/licenses/BSD-3-Clause
 ********************************************************/

#include <Array.hpp>
#include <optypes.hpp>
#include <math.hpp>
#include <common/jit/ScalarNode.hpp>
#include <memory>

namespace cuda
{

template<typename T>
Array<T> createScalarNode(const dim4 &size, const T val)
{
    return createNodeArray<T>(size, std::make_shared<common::ScalarNode<T>>(val));
}

}
