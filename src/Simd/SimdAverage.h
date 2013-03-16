/*
* Simd Library.
*
* Copyright (c) 2011-2013 Yermalayeu Ihar.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy 
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell 
* copies of the Software, and to permit persons to whom the Software is 
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in 
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE 
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/
#ifndef __SimdAverage_h__
#define __SimdAverage_h__

#include "Simd/SimdView.h"

namespace Simd
{
	namespace Base
	{
		void Average(const uchar * a, size_t aStride, const uchar * b, size_t bStride, 
			size_t width, size_t height, size_t channelCount, uchar * dst, size_t dstStride);
	}

#ifdef SIMD_SSE2_ENABLE    
	namespace Sse2
	{
		void Average(const uchar * a, size_t aStride, const uchar * b, size_t bStride, 
			size_t width, size_t height, size_t channelCount, uchar * dst, size_t dstStride);
	}
#endif// SIMD_SSE2_ENABLE

	void Average(const uchar * a, size_t aStride, const uchar * b, size_t bStride, 
		size_t width, size_t height, size_t channelCount, uchar * dst, size_t dstStride);

	void Average(const View & a, const View & b, View & dst);
}
#endif//__SimdAverage_h__