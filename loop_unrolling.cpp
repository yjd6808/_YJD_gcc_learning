esp[5000 + 4];
int* end = &esp[5000];

xmm0 = {0, 1, 2, 3};
xmm2 = {4, 4, 4, 4};

while (esp < end) {
	xmm1 = xmm0;
	
	*(esp + 0) = xmm1[0];
	*(esp + 0)] = xmm1[1];
	*(esp + 0)] = xmm1[2];
	*(esp + 0)] = xmm1[3];

	xmm0[0] += xmm1[0];
	xmm0[1] += xmm1[1];
	xmm0[2] += xmm1[2];
	xmm0[3] += xmm1[3];

	esp 
}

return arr[2];