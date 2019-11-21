#include "myLib.h"

/*
 *Two different functions with different implementations. Create different files for both accelerators and
 *created different metrics to test them at the same time. The final accelerator that will be decided after using HLS
 *and see the performance trade-offs in each case.
 */

/*
 * InitCode Solution: Our initial code without core changes
 * Optimization 1 Solution: Started changing code. Added pipeline in size loop. Initiation Interval = 16
 * Optimization 2 Solution: Added caches to process data0 that creates bottleneck. Initiation Interval = 4(Goal)
 * Optimization 3 Solution:
 */
//TODO APPLY CHANGES TO BIT WIDTH
void myFuncAccel (unsigned int size, unsigned int dim, dataType_t threshold, dataType_t * data0, dataType_t * data1, dataType_t * data2)
{

 #pragma HLS INTERFACE ap_bus depth=256 port=data0 // 5. For simulation only
 #pragma HLS INTERFACE ap_bus depth=16000 port=data1
 #pragma HLS INTERFACE ap_bus depth=16000 port=data2

	unsigned int z, i, k, l,count,r,newcounter;
	size = 1000;
	dim = 16;
	threshold = 100;
	float cache[dim*dim];
	float tempArrData1[dim];
	float tempArrData2[dim];
		count = 0;

copyLoop: for ( z = 0 ; z < dim ; z++){
#pragma HLS unroll factor=16
				cache[z*dim] = data0[z*dim];
				cache[z*dim+1] = data0[z*dim+1];
				cache[z*dim+2] = data0[z*dim+2];
				cache[z*dim+3] = data0[z*dim+3];
				cache[z*dim+4] = data0[z*dim+4];
				cache[z*dim+5] = data0[z*dim+5];
				cache[z*dim+6] = data0[z*dim+6];
				cache[z*dim+7] = data0[z*dim+7];
				cache[z*dim+8] = data0[z*dim+8];
				cache[z*dim+9] = data0[z*dim+9];
				cache[z*dim+10] = data0[z*dim+10];
				cache[z*dim+11] = data0[z*dim+11];
				cache[z*dim+12] = data0[z*dim+12];
				cache[z*dim+13] = data0[z*dim+13];
				cache[z*dim+14] = data0[z*dim+14];
				cache[z*dim+15] = data0[z*dim+15];
			}
sizeLoop:
		for ( i = 0 ; i < size ; i ++ )
		{
#pragma HLS pipeline II=16
initLoop:	for ( k = 0 ; k < dim ; k ++ )
			{

				tempArrData2[k] = 0.0 ;
			}
			newcounter=0;
			r=0;

valueAsn:	for ( k = 0 ; k < dim ; k ++ )
			{
				if(k == 0){
					for(l = 0 ;l < dim ; l ++){
						tempArrData1[l] = data1[ i * dim + l];
					}
				}

				for(l = 0 ;l < dim ; l ++){
					tempArrData2[k]+=(cache[k*dim+l]*tempArrData1[l]);
				}
				if(tempArrData2[k] <= threshold){
					r = 1;
				}

			}

zeroAsn:	for ( l = 0 ;l < dim ; l ++ )
			{
				tempArrData2[l] *= r;
				if(l == dim - 1){
					for ( k = 0 ;k < dim ; k ++ )
					{
						data2 [ i*dim + k ] = tempArrData2[k];
					}
				}
			}


		}
}