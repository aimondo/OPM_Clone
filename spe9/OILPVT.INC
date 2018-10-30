PVTO
-- Column 1: dissolved gas-oil ratio (Mscf per stb)
-- Column 2: bubble point pressure for oil (psia)
-- Column 3: oil FVF for saturated oil (rb per stb)
-- Column 4: oil viscosity for saturated oil (cP)

-- Using values from table 2 in Killough's paper:
0  	 14.7	 1	 1.20 /
0.165	 400	 1.0120	 1.17 /
0.335	 800	 1.0255	 1.14 /
0.500	 1200	 1.0380	 1.11 /
0.665	 1600	 1.0510	 1.08 /
0.828	 2000	 1.0630	 1.06 /
0.985	 2400	 1.0750	 1.03 /
1.130	 2800	 1.0870	 1.00 /
1.270	 3200	 1.0985	 0.98 /
1.390	 3600	 1.1100	 0.95 /
1.500	 4000	 1.1200	 0.94 
	 5000	 1.1189	 0.94 /
/
-- Comment in regards to the last row in PVTO:
--   Killough says that 'at 1000psi above the saturation
--   pressure the Bo is 0.999 times that of the Bo at Psat'
--   which means that the FVF (i.e. Bo) at 5000psia is 0.999*0.1200=1.1189
--   Killough also says that 'the oil viscosity does not 
--   increase with increasing pressure in undersaturated conditions'
--   which explains why the oil viscosity is 0.94.
