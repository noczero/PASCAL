100 REM TINY BASIC ADVENTURE GAME COPYRIGHT (C) 1981 T.PITTMAN
110 Z=276
180 V=16384
210 A=23001
220 B=-24575
230 C=3
240 D=25004
250 E=5
260 F=30006
270 G=7
280 H=8
290 I=9
300 J=26010
310 K=29011
320 L=30012
330 M=26013
340 N=14
350 O=15
360 P=16
370 Q=2129
380 R=14018
390 S=18019
400 T=26020
410 U=21
430 W=23
440 X=24
450 Y=15325
510 PR"WELCOME TO TINY ADVENTURE!"
520 PR"YOU ARE FREE TO WALK AROUND AND"
530 PR"LOOK AT WHAT YOU MAY SEE."
540 PR"THERE ARE OTHER INHABITANTS,"
550 PR"AND VARIOUS OBJECTS YOU CAN PICK UP"
560 PR"AND CARRY. YOU CAN ONLY HOLD ONE"
570 PR"THING AT A TIME IN YOUR HANDS,"
580 PR"BUT YOU CAN KEEP SEVERAL THINGS"
590 PR"IN YOUR KNAPSACK. BE CAREFUL AS YOU"
610 PR"GO FROM PLACE TO PLACE -- IT IS"
620 PR"EASY TO GET TURNED AROUND OR LOST."
630 PR
640 PR"I'M SLOW, BUT AFTER I TYPE '?',"
650 PR"YOU TELL ME WHAT YOU WANT TO DO."
660 PR"PLEASE TYPE ONLY THE FIRST LETTER"
670 PR"OF EACH IMPORTANT WORD, AND LEAVE"
680 PR"THE OTHER WORDS OUT."
690 PR
750 PR"FOR HINTS ON WHAT YOU CAN DO,"
760 PR"TYPE H (FOR HELP). HIT 'RETURN'"
770 PR"KEY TO ENTER YOUR SELECTION."
780 PR
790 PR"HAPPY HUNTING!"
880 PR"OK";
890 GOSUB1710
900
900 REM REMOVE TO HERE FOR MORE MEMORY SPACE
900
1000 REM DESCRIBE SURROUNDINGS
1000
1010 W=3023
1020 GOTO1060
1050 GOSUB1480
1060 PR"YOU ARE IN A ";
1070 U=N+7
1080 N=Y/1000*1000+14
1090 GOSUBN-4
1110 IFW<99GOTO1180
1120 X=Y-W/10+87
1130 IFX<NX=X+400
1140 GOSUBW/10+1208
1150 GOSUBX
1160 IFW>99GOTO1120
1165 GOSUBN+896
1170
1170 REM PROCESS DEMONS
1170
1180 IFN<23000IFB*V<0B=B-2
1185 IFV/8*B<0GOSUB6520
1190 IFT>14000GOSUB3610
1195 IFM>14000GOSUB7310
1200
1200 REM ACCEPT NEXT INPUT LINE
1200
1210 H=8
1230 P=16
1270 GOSUB1710
1280 IFX>0IFX<21GOTOX*500+1510
1290 GOTOV
1300
1300 REM PANORAMA SETUP & SMALL PRINTS
1300
1310 W=23
1320 PR"IN FRONT OF";
1330 GOTO1530
1340 PR"ON YOUR ";
1350 RETURN
1380 PR"FLOWERS BLOOM"
1390 RETURN
1410 W=4023
1420 GOSUB1340
1430 PR"LEFT ";
1440 RETURN
1450 PR"GO THRU WALL"
1460 RETURN
1480 IFB*8<0B=B-V/4
1490 RETURN
1510 W=2023
1520 PR"BEHIND";
1530 PR" YOU ";
1540 RETURN
1550 PR"OK";
1560 GOTO1870
1610 W=1023
1620 GOSUB1340
1630 PR"RIGHT ";
1640 RETURN
1650
1650 REM TEST END OF INPUT LINE (0= YES)
1650
1660   X=USR(Z,USR(Z,46))-13
1660   X=USR(Z,USR(Z,47))-13
1670 RETURN
1700
1700 REM INPUT SUBROUTINES
1700
1710   X=USR(Z+4,USR(Z,46),13)
1710   X=USR(Z+4,USR(Z,47),13)
1720 X=0
1730 INPUTX
1740 IFX=BX=2
1760 IFX<1GOTO1810
1770 IFX=YX=0
1780 X=X-X/1000*1000
1790 IFX<24RETURN
1810 PR"WHAT?"
1820 PR"CHOOSE FROM:"
1830 X=-1
1840 RETURN
1850
1850 REM INPUT YES/NO ANSWER
1850
1860 PR"YES NO"
1870 GOSUB1710
1880 IFX*(X-14)<>0GOTO1860
1890 RETURN
1910 PR"THERE IS NOTHING ";
1920 RETURN
1930 PR"ATTACK ";
1940 RETURN
1950 PR"YOU HAVE ";
1960 RETURN
1970 PR"IN YOUR HAND"
1980 RETURN
2000
2000 REM ATTACK PROCESSOR
2000
2010 GOSUB2340
2020 IFP>99GOTO2110
2030 X=1930
2040 GOTO4840
2060 IFH>99H=H+4000
2070 IFH/2000=11H=H+H/23000*1000-21000
2080 IFP=4916IFH>4000H=H-2000
2090 RETURN
2110 GOSUB1930
2120 GOSUBP/1000*20+12500
2130 PR"WITH ";
2140 GOSUB9770
2150 GOSUBH/50+12500
2160 GOSUB2060
2170 IFH<6000GOTO2210
2180 PR"IS SILLY"
2190 GOTO1210
2210 IFH>99IFP<>13116GOTO2250
2220 PR
2230 GOSUB1550
2240 IFX>0GOTO1210
2250 GOSUB2480
2260 X=P-P/1000*1000
2266 IFB*V<0X=X/2
2270 IFRND(H/5+99)>RND(X)GOTO2410
2280 IFP=20416IFRND(9)>6GOSUB4660
2285 IFH<99GOTO7070
2290 IFRND(9)>3GOTO7070
2310 GOSUB9610
2320 PR"YOU DROPPED WEAPON"
2330 GOTO1180
2340 P=16
2350 IFM+1=NP=13116
2360 IFD+10=NP=4516
2370 IFT=N+6P=20416
2380 IFD+10=NIFV/8*B<0P=4916
2390 RETURN
2410 GOSUBP/1000*10+13500
2420 PR
2430 GOTO1060
2480 IFY<28000IFY>23000IFV/8*B>0B=B+16
2490 RETURN
2500
2500 REM NO B
2500
2510 GOTOV
2700
2700 REM PRINT DIRECTION OF MOVE
2700
2710 P=P/1000
2720 IFN=25014P=25316
2730 IFN=23014P=23416
2740 IFP=28IFN=27014P=27116
2750 IFP=24P=N+202
2770 IFN/28000>0P=N+302-N/30000*100+P/30*300-P/29*200
2780 IFN=24014P=24316-P/25*100+P/26*200-P/27*300
2790 IFP/1000=24IFB*8<0P=24416-P/24200*100
2810 GOTO(Y-P+28491)/10
2820 GOTO1420
2830 GOTO1520
2840 GOTO1620
2850 GOTO1320
2860 GOTO1420
2870 GOTO1520
2880 GOTO1620
2900
2900 REM PRINT CHEST CONTENTS
2900
2910 IFX=128IFK=N-3X=1
2920 IFX<>1IFJ<>N-4GOTO2960
2930 PR"WITH ";
2940 IFX=1GOSUB12715
2945 IFJ=N-4GOSUB12695
2950 PR"IN IT ";
2960 PR"IS ";
2970 PR"OPEN ";
2980 IFX>0PR
2990 RETURN
3000
3000 REM OPEN/CLOSE PROCESSOR
3000
3010 GOSUB9310
3020 IFX=0GOTO9110
3025 IFH<0H=H+V+V
3030 X=X+H-H/2*2
3035 H=0
3040 IFX+X=0GOTO3150
3050 GOSUB1660
3060 IFX>0GOTO3080
3070 GOSUB9260
3075 PR"WHAT";
3080 GOSUB1720
3090 H=0
3110 IFX=4H=1024
3120 IFX=3H=256
3130 IFX=23H=1
3140 IFH=0GOTO9210
3150 GOSUBN+56
3160 IFH>0X=X/H*H
3170 IFH=256X=X-X/1024*1024
3180 IFH=1X=X-X/256*256
3190 IFX=0GOTO4610
3210 IFV/X*2*Q<0GOTO3340
3220 IFQ<0GOTO3250
3230 PR"ALREADY ";
3235 GOSUB3360
3240 GOTO4860
3250 IFX>256IFK<>1011GOTO3310
3255 IFX=512IFB*V>0GOTO3450
3260 Q=Q+X
3270 GOSUB3380
3280 GOTO7070
3310 GOSUB8390
3320 GOSUB3370
3330 GOTO1180
3340 IFQ<0GOTO3230
3350 Q=Q-X
3355 GOTO7070
3360 GOSUB9260
3370 IFQ>=0RETURN
3380 Q=Q+V+V
3390 RETURN
3410 X=8650
3420 GOTO4840
3450 GOSUB4910
3455 IFP<NGOTO3260
3460 PR"TROLL SEES YOU, CLOSES CHEST AGAIN"
3470 GOTO3320
3480 IFB*8>0B=B+V/4
3490 RETURN
3500
3500 REM DRINK PROCESSOR
3500
3510 IFF=1006IFB*256>0GOTO3550
3520 X=8610
3530 GOTO4840
3550 B=B+128
3560 IFB*V<0GOTO7070
3565 B=B+2
3570 GOSUB4920
3580 IFP>NIFM+1=NPR"MAIDEN LOOKS & GASPS"
3590 GOTO7070
3600
3600 REM TROLL PROCESSOR
3600
3610 GOSUB4910
3620 IFK+9<>TGOTO3650
3630 K=13011
3640 IFP>NPR"TROLL TAKES KEYS"
3650 IFM+7=TGOTO5810
3660 X=T
3670 P=8016
3680 IFM=1013P=2016
3690 GOSUB4040
3710 GOSUB4920
3720 IFP<NGOTO3850
3730 IFX=TGOTO3880
3740 IFX-6=NGOTO3810
3750 IFT-6<>NGOTO3850
3760 P=X
3770 GOSUB8630
3780 GOSUB2710
3785 PR
3790 GOTO3850
3810 P=T
3820 GOSUB2710
3830 PR"TROLL ENTERS"
3850 T=X
3860 RETURN
3880 IFT-6=NPR"TROLL SCOWLS"
3890 RETURN
3930
3930 REM ROTATE DIRECTION RANDOMLY
3930
3950 GOSUB1480
3960 Y=N+111+RND(4)*100
3990 GOTO1060
4000
4000 REM NO E
4000
4010 GOTOV
4030
4030 REM CHANGE ROOM FOR TROLL
4030
4040 IFRND(9999)>PRETURN
4050 GOTO4410-X/100
4060 GOTO4290+X/100
4080 X=26020
4090 RETURN
4110 GOTO4220
4120 GOTO4210
4130 GOTORND(3)*20+4420
4140 GOTORND(2)*20+4220
4150 IFQ*4>0GOTO4250
4160 GOTO4180
4170 GOTORND(4)*20+4320
4180 X=24020
4190 RETURN
4210 IFQ*16>0IFK<>13011RETURN
4220 X=28020
4230 RETURN
4240 IFQ*8<0GOTO4180
4250 IFK=13011GOTO4180
4260 RETURN
4320 X=23020
4330 RETURN
4340 X=25020
4350 RETURN
4360 IFQ*4>0IFK<>13011RETURN
4370 GOTO4080
4380 IFQ*8>0IFK<>13011RETURN
4420 X=27020
4430 RETURN
4440 X=30020
4450 RETURN
4460 IFQ*16>0IFK<>13011RETURN
4470 X=29020
4480 RETURN
4500
4500 REM NO F
4500
4510 GOTOV
4520 GOTO4180
4530 GOTO4360
4540 GOTO4180
4550 RETURN
4560 GOTO4240
4570 GOTO4420
4580 GOTO4210
4590 GOTO4220
4600
4600 REM TROLL DUMPS KNAPSACK
4600
4610 X=1670
4620 GOTO4840
4630 GOSUB4920
4640 IFP<NGOTO20110
4650 GOTOX
4660 PR"HE HITS YOU"
4670 GOSUB6210
4680 IFX=0PR"& SPILLS KNAPSACK"
4690 P=2016
4695 IFM=P-3M=N-1
4710 IFA=P-15A=N-13
4720 IFF=P-10F=N-8
4730 IFJ=P-6J=N-4
4740 IFK=P-5K=N-3
4750 IFL=P-4L=N-2
4760 IFR=P+2R=N+4
4770 IFS=P+3S=N+5
4790 RETURN
4800
4800 REM NO CAN DO
4800
4810 X=8390
4820 GOTO4840
4830 GOSUB3480
4840 GOSUB7160
4850 GOSUBX
4860 PR
4870 GOTO1210
4880 GOSUB1480
4890 GOTO4840
4900
4900 REM CHECK IF LIGHT ENOUGH TO SEE
4900
4910 IFT-6<>NGOTO4970
4920 P=N+2
4930 IFL+2=NRETURN
4940 IFL=1012RETURN
4950 IFN<24000IFN<>20014RETURN
4960 IFN>28000RETURN
4970 P=13016
4990 RETURN
5000
5000 REM GO PROCESSOR
5000
5010 W=1023
5020 GOSUB1660
5025 IFX=0PR"GO WHERE";
5030 GOSUB1720
5035 IFX>=0GOSUBX*10+5100
5040 IFX<0GOTO5060
5045 X=X+N
5050 IFX<N+500Y=X-15
5055 GOTOX
5060 X=0
5065 GOSUBN+26
5070 GOSUB5620
5075 PR
5080 PR"COMMAND";
5090 GOTO1210
5100 REM
5110 GOTO1810
5120 X=Y-N-185
5125 GOTO5350
5130 GOTO1810
5140 X=626
5145 RETURN
5150 X=226
5155 RETURN
5160 X=Y-N+15
5165 GOTO5350
5170 GOTO1810
5180 GOTO1820
5190 REM
5200 REM
5210 GOTO1810
5220 X=Y-N-85
5225 GOTO5350
5230 GOTO1810
5240 X=126
5245 RETURN
5250 REM
5260 REM
5270 GOTO1810
5280 X=Y-N-285
5285 GOTO5350
5290 X=326
5295 RETURN
5300 GOTO1810
5310 X=526
5315 RETURN
5320 GOTO1810
5330 X=426
5335 RETURN
5350 IFX<99X=X+400
5360 RETURN
5500
5500 REM HELP PROCESSOR
5500
5510 GOSUB1820
5520 GOTO13110
5600
5600 REM PRINT AVAILABLE DIRECTIONS
5600
5610 IFX*32<0PR"OFF ";
5620 IFX*1024<0PR"UP ";
5630 IFX*512<0PR"DOWN ";
5670 IFX<0RETURN
5680 X=(X-X/32*32)*17
5690 GOTO(Y-N)/10+5699
5710 X=X+X
5720 X=X+X
5730 X=X+X
5740 IFV/8*X<0PR"FORWARD ";
5750 IFX*512<0PR"BACK ";
5760 IFX*256<0PR"LEFT ";
5770 IFX*1024<0PR"RIGHT";
5780 PR
5790 RETURN
5800
5800 REM CONTINUING TROLL PROCESSOR
5800
5810 X=T
5815 IFP<NGOTO5850
5820 IFB*64<0GOTO5850
5825 B=B+512
5830 GOSUB12895
5835 PR"OBVIOUSLY DOMINATES ";
5840 GOSUB12755
5845 PR
5850 GOSUB4060
5860 IFX=TIFP>NGOTO3880
5870 IFX-6=NRETURN
5880 T=X
5890 IFP<NGOTO5980
5910 GOSUB8630
5920 P=T
5930 GOSUB2710
5940 IFRND(9)<3GOTO7270
5970 PR"WITH MAIDEN"
5980 M=T-7
5990 RETURN
6000
6000 REM INVENTORY PROCESSOR
6000
6010 GOSUB1950
6030 GOSUB6440
6040 PR"KEPT"
6050 GOSUB9770
6060 IFH<99GOTO6130
6070 GOSUB1950
6080 IFH=13008H=8008
6110 GOSUBH/50+12495
6120 GOTO6140
6130 GOSUB1910
6140 GOSUB1970
6160 GOTO1060
6200
6200 REM TEST KNAPSACK/ROOM EMPTY
6200
6210 X=(A/1000-2)*(F/1000-2)*(J/1000-2)*(K/1000-2)
6220 X=(L/1000-2)*(R/1000-2)*(S/1000-2)*X
6230 RETURN
6240 X=0
6250 IFN<>A+13IFN<>F+8IFN<>J+4IFN<>K+3X=M
6260 IFN<>L+2IFN<>R-4IFN<>S-5IFX=MRETURN
6270 X=0
6280 RETURN
6440 GOSUB6210
6450 P=2016
6460 IFX=0GOTO13810
6480 PR"NOTHING ";
6490 RETURN
6500
6500 REM DRAGON PROCESSOR
6500
6510 GOTOV
6520 X=D
6525 IFF-2=DIFB*256<0B=B-128
6530 IFD<25000IFRND(9)>3D=D+1000
6540 IFD>24000IFRND(9)>5D=D-1000
6550 GOSUB4920
6560 IFX=DGOTO6790
6580 IFP<NGOTO6930
6590 IFD+10=NGOTO6660
6610 IFX+10<>NGOTO6960
6620 PR"DRAGON EXITS ";
6630 P=D
6640 GOSUB2710
6650 GOTO6950
6660 GOSUB12575
6670 PR"ENTERS ";
6680 P=X
6690 GOSUB2710
6710 PR
6720 IFM+1=NGOTO7230
6730 IFM<>1013GOTO6960
6740 PR"THE ";
6750 GOSUB12660
6760 PR"TURNS COLD"
6770 RETURN
6790 IFD+10<>NGOTO6910
6810 IFP<NGOTO6880
6820 GOSUB12575
6830 PR"FILLS YOUR VIEW"
6840 IFV/8*B>0PR"IT SLEEPS"
6850 IFM+1<>NGOTO6730
6860 PR"MAIDEN SOBS"
6870 RETURN
6880 PR"YOU HEAR BREATHING"
6890 RETURN
6910 IFD=25004IFRND(9)>6B=B-16
6920 RETURN
6930 IFD+10<>NIFX+10<>NGOTO6960
6940 PR"YOU HEAR SCUFFLING";
6950 PR
6960 IFD+9=MIFM+7<>TGOTO7210
6960 RETURN
7000
7000 REM KEEP PROCESSOR (NO LIMIT)
7000
7010 GOSUB9770
7020 IFH<999GOTO6130
7030 IFH=13008GOTO7110
7040 P=2016
7050 GOSUB9680
7070 PR"OK"
7090 GOTO1180
7110 GOSUB7160
7120 GOSUB7180
7130 GOSUB12655
7140 PR
7150 GOTO1210
7160 PR"CAN'T ";
7170 RETURN
7180 PR"KEEP ";
7190 RETURN
7200
7200 REM MAIDEN PROCESSOR
7200
7210 IFN<22000RETURN
7220 IFN>28000RETURN
7230 PR"A SCREAM ";
7240 IFM+1=NGOTO7280
7250 PR"ECHOS ";
7260 GOSUB8020
7270 PR
7275 RETURN
7280 PR"PIERCES AIR"
7290 RETURN
7310 GOSUB4920
7320 IFB*V<0GOTO7380
7330 IFM+8=UIFN+7<>UIFM+7<>TIFRND(N/3)<P/4GOTO7345
7335 IFM+1=NGOTO7360
7340 RETURN
7345 M=N-1
7350 PR"YOU HEAR FOOTSTEPS"
7360 IFP>NPR"MAIDEN HOLDS OUT HAND"
7370 RETURN
7380 IFM+1=NIFP>NPR"MAIDEN DOES NOT SEE YOU"
7390 RETURN
7500
7500 REM LOOK PROCESSOR
7500
7510 GOSUB1660
7520 IFX=0PR"LOOK WHERE";
7530 GOSUB1720
7540 IFX>=0GOTOX*10+7600
7550 X=126
7555 GOSUB5620
7560 GOTO5080
7600 GOSUB1810
7605 GOTO7550
7610 GOTO1010
7620 Y=Y-200
7625 GOTO7655
7630 GOTO7600
7640 GOSUBN+596
7645 GOTO1180
7650 Y=N+211
7655 IFY<N+100Y=Y+400
7660 W=1023
7665 GOTO1060
7670 REM
7680 REM
7690 REM
7700 REM
7710 GOTO7600
7720 Y=Y-100
7725 GOTO7655
7730 GOTO7600
7740 Y=N+111
7745 GOTO7660
7750 REM
7760 REM
7770 GOTO7600
7780 Y=Y-300
7785 GOTO7655
7790 Y=N+311
7795 GOTO7660
7800 GOTO7600
7810 GOSUBN+496
7815 GOTO1180
7820 GOTO7600
7830 Y=N+411
7835 GOTO7660
8000
8000 REM SMALL PRINTS
8000
8010 GOTOV
8020 PR"IN THE DISTANCE ";
8030 RETURN
8040 PR"A BOAT IS ";
8045 PR"BEACHED"
8050 RETURN
8060 PR"YOU FELL INTO ";
8070 RETURN
8080 PR"A WATERFALL"
8090 RETURN
8100 PR"A STEEP BLUFF "
8110 RETURN
8370 PR"DARK ROOM"
8380 RETURN
8390 PR"IT IS LOCKED"
8400 RETURN
8500
8500 REM NO N
8500
8510 GOTOV
8520 GOSUB4920
8530 IFP<NGOTO20110
8540 IFX=0GOTO23110
8550 X=X-V-V
8560 PR"A CORRIDOR LEADS ";
8570 GOSUB5610
8580 PR"INTO THE GLOOM"
8590 RETURN
8610 PR"DRINK ";
8620 RETURN
8630 PR"TROLL EXITS ";
8640 RETURN
8650 PR"FLY"
8660 RETURN
8710 PR"SWIM"
8720 RETURN
8730 PR"DANK";
8740 RETURN
8750 PR"MISTY";
8760 RETURN
8770 PR"SOOTY";
8780 RETURN
8790 PR"PLAIN";
8800 RETURN
8810 PR"DINGY";
8820 RETURN
8830 PR"HANDS FULL"
8840 RETURN
8950
8950 REM WALL DESCRIPTOR
8950
8960 PR"IS A ";
8970 GOSUBX
8980 PR" WALL"

8990 RETURN
9000
9000 REM OPEN PROCESSOR
9000
9010 GOSUB3380
9020 GOTO3010
9110 X=3360
9150 GOTO4840
9210 PR"ONLY ";
9220 GOSUB9260
9230 PR"DOOR WINDOW CHEST"
9240 GOSUB3370
9250 GOTO5080
9260 X=0
9270 IFQ<0GOTO2970
9280 PR"CLOSE ";
9290 RETURN
9310 X=0
9320 GOSUBN+56
9325 X=X+X
9330 H=Q+Q
9340 IFQ<0H=-H
9350 H=H+H
9355 IFX<0H=H+1
9360 IFH/4*4<>HIFX>0H=H+1
9365 X=X+X
9370 IFX>0GOTO9350
9380 IFH>0IFX<0GOTO9350
9390 RETURN
9500
9500 REM PUT PROCESSOR
9500
9510 GOSUB9770
9520 IFH<99GOTO6130
9530 GOSUB9660
9540 GOTO7070
9600
9600 REM RELEASE HELD OBJECT
9600
9610 GOSUB9770
9660 P=N+2
9670 IFH<99RETURN
9680 GOTOH/50+10100
9700
9700 REM GET IN HAND
9700
9770 H=8
9810 IFA=1001H=1008
9820 IFF=1006H=6008
9830 IFJ=1010H=10008
9840 IFK=1011H=11008
9850 IFL=1012H=12008
9860 IFM=1013H=13008
9870 IFR=1018H=18008
9880 IFS=1019H=19008
9890 RETURN
10000
10000 REM NO Q
10000
10010 GOTOV
10100
10100 REM MOVE AN OBJECT
10100
10120 A=P-15
10125 RETURN
10220 F=P-10
10225 RETURN
10300 J=P-6
10305 RETURN
10320 K=P-5
10325 RETURN
10340 L=P-4
10345 RETURN
10360 M=P-3
10365 RETURN
10460 R=P+2
10465 RETURN
10480 S=P+3
10485 RETURN
10500
10500 REM NO R
10500
10510 GOTOV
11000
11000 REM NO S
11000
11010 GOTOV
11500
11500 REM TAKE PROCESSOR
11500
11510 GOSUB9770
11520 X=8830
11550 IFH>99GOTO4840
11560 GOSUB1660
11570 IFX=0PR"TAKE WHAT";
11580 GOSUB1720
11585 P=1016
11590 IFX>0IFX<20GOSUBX*20+12100
11600 IFX>0IFX<20GOTO7070
11610 PR"CAN TAKE:"
11615 P=2016
11620 GOSUB13810
11630 PR
11640 GOSUB13780
11660 GOTO5075
12120 IFA<>2001IFA+13<>NGOTO6270
12125 GOTO10120
12140 REM
12160 REM
12180 REM
12200 GOTO6270
12220 IFF<>2006IFF+8<>NGOTO6270
12225 GOTO10220
12240 GOTO6270
12260 GOTO12360
12280 GOTO6270
12300 IFJ<>2010IFJ+4<>NGOTO6270
12305 IFJ=26010IFQ*64>0GOTO6270
12310 IFJ=29010IFQ*128>0GOTO6270
12315 GOTO10300
12320 IFK<>2011IFK+3<>NGOTO6270
12325 IFK=29011IFQ*128>0GOTO6270
12330 GOTO10320
12340 IFL<>2012IFL+2<>NGOTO6270
12345 GOTO10340
12360 IFM<>2099IFM+1<>NGOTO6270
12365 GOTO10360
12380 REM
12400 REM
12420 REM
12440 GOTO6270
12460 IFR<>2018IFR-4<>NGOTO6270
12465 GOTO10460
12480 IFS<>2019IFS-5<>NGOTO6270
12485 GOTO10480
12490
12490 REM PRINT OBJECT NAME
12490
12495 PR"YOUR ";
12500 PR"BARE HANDS ";
12505 RETURN
12515 PR"AN ";
12520 PR"AXE ";
12525 RETURN
12555 PR"A ";
12560 PR"CHEST "; 
12565 RETURN 
12575 PR"A HUGE "; 
12580 PR"DRAGON "; 
12585 RETURN 
12615 GOSUB12630 
12620 PR"FLASK "; 
12625 RETURN 
12630 PR"A"; 
12635 IFB*256<OPR"N EMPTY";
12640 PR" "; 
12645 RETURN 
12655 PR"A "; 
12660 PR"FAIR MAIDEN'S HAND "; 
12665 RETURN 
12695 PR"SOME "; 
12700 PR"JEWELS "; 
12705 RETURN 
12715 PR"SOME "; 
12720 PR"KEYS "; 
12725 RETURN 
12735 PR"A "; 
12740 PR"LANTERN "; 
12745 RETURN 
12755 PR"A FAIR "; 
12760 PR"MAIDEN ";
12765 RETURN 
12775 PR"A "; 
12780 PR"MIRROR "; 
12785 RETURN
12855 PR"A "; 
12860 PR"ROCK "; 
12865 RETURN 
12875 PR"A "; 
12880 PR"SWORD "; 
12885 RETURN 
12895 PR"AN EVIL "; 
12900 PR"TROLL ";
12905 RETURN 
12955 PR"A "; 
12960 PR"WINDOW "; 
12965 RETURN
13080 
13080 REM HELP COMMAND
13080
13090 IFX>0GOSUB1810 
13110 GOSUB4920
13115 IFP<NGOTO13180 
13120 GOSUB2340 
13125 IFP>99GOSUB1930 
13160 GOSUB9310 
13170 IFH<0IFX<0GOSUB9270 
13180 IFF=1006IFB*256>0GOSUB8610
13190 PR"GO HELP INVENTORY "; 
13210 GOSUB4920 
13220 IFP<NGOTO13280
13230 PR"LOOK "; 
13240 GOSUB3380 
13250 GOSUB9310 
13260 GOSUB3380
13270 IFH<0IFX<0GOSUB2970 
13280 GOSUB9770 
13290 IFH<99GOTO13340
13310 IFH<>13008GOSUB7180 
13320 PR"PUTDOWN" 
13330 GOTO1210
13340 GOSUB6210 
13350 IFX=0GOTO13380 
13360 GOSUB6240 
13370 IFX>0IFX<>N-1GOTO4860
13380 PR"TAKE" 
13390 GOTO1210 
13500 
13500 REM DESTROY AN OBJECT (D,M,T) 
13500 
13510 PR"YOU KILLED THE "; 
13520 RETURN 
13540 IFV/8*B<0B=B-16 
13600 D=13004 
13610 GOSUB13510 
13620 GOTO12580 
13630 M=13013 
13680 GOSUB13510 
13690 GOTO12760 
13700 T=13020 
13710 GOSUB13510
13720 IFK=13011K=N-3 
13730 GOTO12900 
13740 
13740 REM LIST OBJECTS 
13740
13745 PR"NEARBY IS "; 
13750 GOSUB13770 
13760 GOTO7270 
13770 X=-5 
13780 P=N+2 
13790 GOTO13820 
13810 IFP>NGOTO13770 
13815 X=0 
13820 IFA+15=PGOSUBX+12520
13830 IFF+10=PGOSUBX+12620 
13840 IFJ+6<>PGOTO13910
13850 IFP<>26016IFP<>29016GOTO13890 
13860 IFX=0IF(P/29000+1)*64*Q<0GOTO13890
13870 GOTO13910 
13890 GOSUBX+12700 
13910 IFK+5<>PGOTO13960 
13920 IFP<>29016GOTO13950 
13930 IFX=0IFQ*128<0GOTO13950 
13940 GOTO13960
13950 GOSUBX+12720 
13960 IFL+4=PGOSUBX+12740 
13970 IFR-2=PGOSUBX+12860
13980 IFS-3=PGOTOX+12880 
13990 RETURN 
14000 
14000 REM THE STREAM IN A RAVINE
14000 
14010 PR"RAVINE"
14020 PR"A BROOK AT YOUR FEET"
14030 RETURN
14040 X=254
14070 RETURN
14110 IFB*8<0GOSUB8020
14115 GOSUB8080
14120 PR"CRASHES DOWN ";
14130 GOTO16110
14140 IFB*8<0GOTO1050
14145 GOSUB8060
14150 PR"A CREVICE BEHIND ";
14160 GOSUB8080
14170 Y=25225
14180 GOSUB2480
14185 PR"YOU TUMBLE FAR"
14190 GOTO1060
14210 PR"IS A ";
14220 GOTO18010
14240 Y=18225
14250 GOTO1050
14310 IFB*8>0GOSUB8020
14315 IFB*4>0GOSUB8040
14320 IFB*4>0PR"WHERE ";
14325 PR"STREAM MEETS SEA"
14330 RETURN
14340 IFB*8>0GOTO15470
14350 IFB*4<0GOTO21640
14360 Y=21325
14370 GOTO1050
14410 PR"IS A ";
14420 GOTO15010
14440 Y=15425
14450 GOTO1050
14510 GOTO14110
14540 Y=14125
14550 GOTO14140
14610 PR"THERE ARE ROCKS"
14620 RETURN
14640 Y=14325
14650 GOTO14340
14910 GOSUB6240
14920 IFX>0RETURN
14930 GOTO13745 
15000 
15000 REM INITIAL POSITION IN MEADOW
15000
15010 PR"MEADOW"
15040 X=30
15050 IFB*8<0X=14
15070 RETURN
15110 GOSUB16110
15120 PR"SHIMMER ";
15130 GOTO7260
15140 Y=16125
15150 GOTO1060
15210 PR"SOUNDS RUNNING WATER"
15220 RETURN
15240 IFB*8>0Y=14225
15250 GOTO1050
15310 GOTO1380
15340 Y=17325
15350 GOTO1060
15410 IFB*8>0GOSUB8020
15420 PR"IS A COTTAGE"
15430 RETURN
15440 IF B*8<0GOTO23140
15470 GOSUB3480
15490 GOTO1060
15510 PR"FLEECY CLOUDS IN BLUE SKY"
15530 RETURN
15540 GOTO3410
15610 GOSUB6240
15615 IFX>0GOTO1380
15620 PR"HIDDEN IN GRASS:";
15630 GOTO22625
15640 GOTO4610
15910 RETURN
16000
16000 REM NORTH MEADOW
16000
16010 GOTO15010
16040 X=12
16045 IFB*8<0X=14
16050 IFV/2*Q>0X=X-X/14*8
16060 RETURN
16070 IFB*8<0X=4
16090 RETURN
16100 PR"CLIMB ";
16110 PR"SHEER CLIFFS"
16120 RETURN
16140 X=16100
16155 IFB*8<0GOTO1050
16160 GOTO4840
16210 GOTO1380
16240 Y=15225
16250 GOTO1060
16310 GOSUB15410
16320 GOTO29110
16340 IFB*8>0GOTO15470
16360 IFV/2*Q>0GOTO23140
16370 Y=29325
16380 GOTO1050
16384 GOTO13090
16390 PR"ENTER ";
16410 PR"A THICK HEDGE"
16430 RETURN
16440 X=16390
16460 GOTO4840
16510 GOTO15510
16540 GOTO3410
16610 GOTO15610
16640 GOTO4610
16910 RETURN
17000
17000 REM SOUTH MEADOW
17000
17010 GOTO15010
17040 X=6
17050 IFB*8<0X=14
17055 IFQ*1024>0X=X-X/7
17060 RETURN
17070 IFB*8<0X=1024
17080 RETURN
17110 GOSUB15410
17120 GOTO30310
17140 IFB*8>0GOTO15470
17160 IFQ*32>0GOTO4810
17170 Y=30125
17180 GOTO1050
17210 GOTO1380
17240 GOTO16240
17310 PR"A BLUFF OVERLOOKS SEA"
17315 IFB*4>0RETURN
17320 GOSUB8040
17325 PR"ON AN ISLAND"
17330 RETURN
17340 IFB*8<0GOTO1050
17350 GOTO4610
17410 GOTO16410
17440 GOTO16440
17510 GOTO15510
17540 GOTO3410
17610 GOTO15610
17640 GOTO4610
17910 RETURN
18000
18000 REM WEST FOREST
18000
18010 PR"FOREST"
18040 X=30
18070 RETURN 
18110 PR"ARE TREES"
18120 RETURN
18140 N=19014
18150 GOTO3950
18210 GOTO18110
18240 GOTO18140
18310 GOTO18110
18340 GOTO18140
18410 GOTO15210
18440 Y=14425
18450 GOTO1050
18510 GOSUBY-N+1209
18520 PR"MOSS IS GREENER"
18535 RETURN
18540 GOTO3410
18610 GOTO22610
18640 GOTO4610
18910 IFS<>18019RETURN
18920 GOSUB12875
18930 PR"CATCHES YOUR EYE"
18935 RETURN
19000
19000 REM LOST IN THE FOREST
19000
19010 GOSUB18010
19020 PR"EVERY DIRECTION LOOKS SAME"
19040 X=30
19070 RETURN
19110 GOTO18110
19140 GOTO3950
19210 GOTO18110
19240 GOTO3950
19310 GOTO18110
19340 GOTO3950
19410 GOTO18110
19440 IFB*8<0GOTO19480
19450 B=B+V/4
19460 GOTO3960
19480 N=18014
19490 GOTO3960
19510 GOTO18510
19540 GOTO3410
19610 GOTO22610
19640 GOTO4610
19910 RETURN
20000
20000 REM LOST AT SEA
20000
20010 GOSUB21010
20020 PR"IT'S DARK"
20040 X=30
20070 RETURN
20110 PR"YOU SEE NOTHING"
20120 RETURN
20140 IFB*8>0GOTO19450
20150 P=N+2
20160 N=21014
20180 GOSUB4695
20190 GOTO3960
20210 GOTO20110
20240 GOTO3950
20310 GOTO20110
20340 GOTO3950
20410 GOTO20110
20440 GOTO3950
20510 GOSUBY-N+1209
20520 PR"BIG DIPPER TWINKLES"
20530 RETURN
20540 GOTO3410
20610 GOTO21610
20640 GOTO21640
20910 GOSUB4920
20920 IFP>NGOTO21910
20930 RETURN
21000
21000 REM IN BOAT IN WATER
21000
21010 PR"BOAT ";
21015 IFN>21000IFB*8>0GOTO21030
21020 PR"AT SEA"
21025 RETURN
21030 GOSUB8045
21035 IFB*4<0GOTO21990
21040 X=30
21070 RETURN
21110 IFB*8>0IFB*4>0GOTO21120
21115 GOSUB8020
21120 PR"IS MAINLAND"
21125 RETURN
21140 IFB*8>0IFB*4>0GOTO21180
21150 B=B-V/4
21170 GOTO1060
21180 Y=14125
21190 GOTO15470
21210 PR"HORIZON IS LOST
21220 GOSUB8020
21230 GOTO7270
21240 P=N+2
21250 N=20014
21260 GOTO20180
21310 IFB*4>0G0SUB8020
21320 PR"IS A ";
21330 GOTO22010
21340 IFB*4<0GOTO21380
21350 B=B+V/4
21370 GOTO1060
21380 Y=22325
21390 GOTO1050 
21410 GOTO21210
21440 GOTO21240
21510 GOTO15510
21540 GOTO3410
21610 PR"WATER IS CLEAR"
21620 RETURN
21640 X=8710
21650 GOTO4840
21910 GOSUB6240
21915 IFX>0IFN-1<>MRETURN
21920 PR"WITH YOU IS"
21925 IFM/2000=10GOSUB12755
21930 GOTO13750
21990 PR"AT A ";
22000
22000 REM ON AN ISLAND
22000
22010 PR"SMALL ISLAND"
22040 X=16
22050 IFB*4<0X=18
22070 RETURN
22110 IFB*4>0GOTO21115
22115 GOTO21010
22140 IFB*4>0GOTO21640
22150 Y=21125
22160 GOTO1050
22210 GOTO21210
22240 GOTO21640
22310 GOTO21210
22340 GOTO21640
22410 GOTO22990
22440 Y=23425
22450 GOTO1050
22510 GOTO15510
22540 GOTO3410
22610 PR"ON THE GROUND IS ";
22620 GOSUB6240
22625 P=N+2
22630 GOSUB6460
22635 GOTO7270
22640 GOTO4610
22910 GOSUB6240
22920 IFX>0RETURN
22930 GOTO22610
22990 PR"IS A ";
23000
23000 REM IN THE CAVE
23000
23010 PR"CAVE"
23040 X=84
23070 RETURN
23110 X=8730
23120 GOTO8960
23140 X=1450
23150 GOTO4840
23210 PR"SUN SHINES IN"
23220 RETURN
23240 Y=22225
23250 GOTO1050
23310 PR"ARE GRAFITI"
23320 RETURN
23340 GOTO23140
23410 PR"A TUNNEL SLOPES DOWN"
23420 RETURN
23440 Y=24125
23450 GOTO1050
23510 GOTO20110
23540 GOTO4610
23610 PR"TUNNEL IS DARK"
23620 Y=23425
23630 RETURN
23640 GOTO23440
23910 GOTO22910
24000
24000 REM IN THE TUNNEL
24000
24010 GOSUB4920
24020 IFP<NPR"DARK ";
24030 PR"TUNNEL"
24040 GOSUB24070
24050 IFV/X*2*Q<0X=X+1
24060 X=72+X/8000*38+X*16
24065 RETURN
24070 X=V/4
24080 IFB*8>0X=X+X
24090 RETURN
24110 X=32
24120 IFB*8<0X=0
24130 GOTO8520
24140 IFB*8<0GOTO23140
24160 GOTO15470
24210 X=64
24220 GOTO24120
24240 IFB*8<0GOTO23140
24250 Y=25225
24260 GOTO1050
24310 X=1024
24320 IFB*8<0X=64
24330 GOTO8520
24340 IFB*8<0GOTO24650
24350 Y=23225
24360 GOTO1050
24410 X=24420
24415 GOTO4630
24420 GOSUB24070
24425 X=V/X*2
24430 GOTO29320
24440 GOSUB24070
24450 IFV/X*2*Q>0GOTO4610
24460 Y=26425
24470 IFB*8<0Y=27425
24490 GOTO1050
24510 X=24520
24515 GOTO4630
24520 IFB*8<0GOTO20110
24525 Y=24125
24530 GOSUB1520
24535 GOTO24110
24540 Y=24125
24550 GOTO24140
24610 Y=24225
24615 IFB*8>0GOTO24210
24620 Y=24325
24625 GOTO24310
24640 IFB*8>0GOTO24350
24650 Y=24225
24660 GOTO1050
24910 GOSUB4920
24920 IFP>NIFB*8>0GOTO22910
24930 RETURN
25000
25000 REM IN DRAGON'S LAIR
25000
25010 GOSUB4920
25015 IFP<NGOTO8370
25020 PR"CAVERN"
25040 X=40
25070 RETURN
25110 X=25120
25115 GOTO4630
25120 X=8750
25130 GOTO8960
25140 GOTO25440
25210 X=25220
25215 GOTO4630
25220 X=8770
25230 GOTO8960
25240 GOTO25440
25310 X=25320
25315 GOTO4630
25320 X=32
25330 GOTO8520
25340 Y=24425
25350 GOTO1050
25410 X=23110
25420 GOTO4630
25440 IFD>VIFV/8*B>0B=B+16
25450 GOSUB4920
25460 IFP<NGOTO4610
25470 GOTO23140
25510 GOTO20110
25540 GOTO25340
25610 X=25630
25620 GOTO4630
25630 GOTO22610
25640 GOTO4610
25910 X=D
25920 IFV/8*B>0GOSUB6550
25930 GOTO24910
26000
26000 REM IN THE TROLL'S DEN
26000
26010 GOSUB4920
26015 IFP<NGOTO8370
26020 PR"TROLL'S DEN"
26040 X=0
26050 IFQ*4<0X=16
26060 RETURN
26070 X=8704
26090 RETURN
26110 GOTO25410
26140 GOTO25440
26150 IFQ*4>0GOTO20110
26160 PR"IT'S DRAFTY"
26170 RETURN
26210 GOSUB4920
26220 IFP<NGOTO26150
26230 X=4
26235 GOTO29320
26240 IFQ*4>0GOTO4810
26250 Y=24225
26260 GOTO1050
26310 X=26320
26315 GOTO4630
26320 X=12775
26325 IFB*V<0GOTO26350
26330 PR"YOU SEE YOURSELF IN ";
26335 GOTO26350
26340 GOTO25440
26350 GOSUBX
26360 GOTO7270
26410 X=26420
26415 GOTO4630
26420 X=64
26430 GOTO29420
26440 GOTO25440
26510 X=26520
26515 GOTO4630
26520 X=8810
26530 GOTO29520
26540 GOTO4610
26610 X=26620
26615 GOTO4630
26620 PR"NOT MUCH AROUND.."
26630 GOTO13750
26640 GOTO4610
26910 RETURN
27000
27000 REM IN THE WINE CELLAR
27000
27010 PR"WINE CELLAR"
27020 GOSUB4920
27030 IFP<NGOTO20020
27040 X=34
27050 IFQ*8<0X=38
27060 RETURN
27070 X=V/4
27090 RETURN
27110 PR"STEPS UP ARE FAINTLY LIT"
27120 RETURN
27140 Y=28225
27150 GOTO1050
27210 X=8
27220 GOTO29320
27240 IFQ*8>0GOTO4810
27250 Y=24325
27260 GOTO15470
27310 GOTO25410
27340 GOTO25440
27410 X=27420
27415 GOTO4630
27420 PR"IS A WINE RACK"
27430 RETURN
27440 GOTO25440
27510 GOTO26510
27540 GOTO27140
27610 GOTO26610
27640 GOTO27240
27910 GOTO22910
28000
28000 REM IN THE HALLSTAIRWELL
28000
28010 PR"HALLWAY"
28020 RETURN
28040 X=82
28050 RETURN
28070 X=V/8
28090 RETURN
28110 GOTO29310
28140 IFQ*16>0GOTO4810
28150 Y=29125
28160 GOTO1050
28210 X=8790
28220 GOTO8960
28240 GOTO23140
28310 PR"A STAIRWAY DESCENDS"
28320 GOTO8580
28340 Y=27325
28350 GOTO1050
28410 PR"OPENS TO NEXT ROOM"
28420 RETURN
28440 Y=30425
28450 GOTO1050
28510 PR"A SKYLIGHT"
28520 RETURN
28540 GOTO4610
28610 GOTO28310
28640 GOTO28340
28910 GOSUB6250
28920 IFX>0RETURN
28930 GOTO26620
29000
29000 REM IN BEDROOM
29000
29010 PR"BEDROOM"
29040 X=10
29050 RETURN
29070 X=2308
29090 RETURN
29110 X=V/2
29120 GOSUB12955
29125 IFX*Q<0GOTO2960
29130 PR"IS CLOSED"
29135 RETURN
29140 IFV/2*Q>0GOTO23140
29150 Y=16125
29160 GOTO15470
29210 PR"IS A BED"
29220 RETURN
29240 GOTO23140
29310 X=16
29320 PR"A DOOR ";
29330 GOTO29125
29340 IFQ*16>0GOTO4810
29350 Y=28325
29360 GOTO1050
29410 X=128
29420 GOSUB12555
29425 IFX*Q>0GOTO29130
29430 GOTO2910
29440 GOTO23140
29510 X=8790
29520 PR"THE CEILING IS ";
29530 GOSUBX
29535 GOTO7270
29540 GOTO4610
29610 GOTO26620
29640 GOTO4610
29910 GOSUB6240
29920 IFX=0GOTO26620
29930 RETURN
30000
30000 REM IN THE TABLE ROOM
30000 
30010 PR"ROOM WITH TABLE"
30040 X=4
30050 IFQ*32<0X=12
30060 RETURN
30070 X=1024
30090 RETURN
30110 GOTO28210
30140 GOTO23140
30210 GOTO28410
30240 Y=28225
30250 GOTO1050
30310 X=32
30320 GOTO29320
30340 IFQ*32>0GOTO4810
30350 Y=17325
30360 GOTO15470
30410 GOTO26310
30440 GOTO23140
30510 GOTO29510
30540 GOTO4610
30610 PR"THE FLOOR IS CLEAN"
30620 RETURN
30640 GOTO4610
30910 GOSUB6240
30915 IFX<>0RETURN
30920 PR"ON THE TABLE ARE"
30925 GOSUB13750
30930 IFB*128<0RETURN
30935 PR"FLASK CONTAINS-MILKY FLUID"
30940 PR"LABELLED 'MAGIC DRAGON TEARS'"
30950 B=B+256
30955 RETURN
32000 END
