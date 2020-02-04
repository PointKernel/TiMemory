// MIT License
//
// Copyright (c) 2020, The Regents of the University of California,
// through Lawrence Berkeley National Laboratory (subject to receipt of any
// required approvals from the U.S. Dept. of Energy).  All rights reserved.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#define TIMEMORY_BUILD_EXTERN_INIT
#define TIMEMORY_BUILD_EXTERN_TEMPLATE

#include "timemory/components.hpp"
#include "timemory/manager.hpp"
#include "timemory/mpl/operations.hpp"
#include "timemory/utility/bits/storage.hpp"
#include "timemory/utility/macros.hpp"
#include "timemory/utility/serializer.hpp"
#include "timemory/utility/singleton.hpp"
#include "timemory/utility/utility.hpp"

#if defined(TIMEMORY_USE_LIKWID)

//======================================================================================//

TIMEMORY_INSTANTIATE_EXTERN_OPERATIONS(component::likwid_perfmon, false)
TIMEMORY_INSTANTIATE_EXTERN_OPERATIONS(component::likwid_nvmon, false)

//======================================================================================//

namespace tim
{
TIMEMORY_INSTANTIATE_EXTERN_INIT(likwid_perfmon)
TIMEMORY_INSTANTIATE_EXTERN_INIT(likwid_nvmon)

namespace component
{
//
//
template struct base<likwid_perfmon, void>;
template struct base<likwid_nvmon, void>;
//
//
}  // namespace component
}  // namespace tim

#endif
