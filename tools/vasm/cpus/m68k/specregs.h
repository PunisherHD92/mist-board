  "CCR",     -1,              m68000up|mcf,
  "SR",      -1,              m68000up|mcf,
  "NC",      0,               m68040up,
  "DC",      1,               m68040up,
  "IC",      2,               m68040up,
  "BC",      3,               m68040up,

/* ColdFire */
  "ACC",     0,               mcfmac|mcfemac,
  "ACC0",    0,               mcfemac,
  "ACC1",    1,               mcfemac,
  "ACC2",    2,               mcfemac,
  "ACC3",    3,               mcfemac,
  "ACCext01",1,               mcfemac,
  "ACCext23",3,               mcfemac,
  "MACSR",   -1,              mcfmac|mcfemac,
  "MASK",    -1,              mcfmac|mcfemac,
  "<<",      MACSF_ShiftLeft, mcfmac|mcfemac,
  ">>",      MACSF_ShiftRight,mcfmac|mcfemac,

/* pmove format 1 68030+68851 */
  "TC",      0,               m68030|m68851,
  "SRP",     2,               m68030|m68851,
  "CRP",     3,               m68030|m68851,
/* pmove format 1 68851 only */
  "DRP",     1,               m68851,
  "CAL",     4,               m68851,
  "VAL",     5,               m68851,
  "SCC",     6,               m68851,
  "AC",      7,               m68851,
/* pmove format 2 BADx, BACx */
  "BAC0",    0,               m68851,
  "BAC1",    1,               m68851,
  "BAC2",    2,               m68851,
  "BAC3",    3,               m68851,
  "BAC4",    4,               m68851,
  "BAC5",    5,               m68851,
  "BAC6",    6,               m68851,
  "BAC7",    7,               m68851,
  "BAD0",    0,               m68851,
  "BAD1",    1,               m68851,
  "BAD2",    2,               m68851,
  "BAD3",    3,               m68851,
  "BAD4",    4,               m68851,
  "BAD5",    5,               m68851,
  "BAD6",    6,               m68851,
  "BAD7",    7,               m68851,
/* pmove format 3 */
  "MMUSR",   0,               m68030|m68851,
  "PSR",     0,               m68030|m68851,
  "PCSR",    1,               m68851,
/* pmove 030 only */
  "TT0",     2,               m68030,
  "TT1",     3,               m68030,
#if 0
/* pmove 68ec030 */
  "ACUSR",   -1,              m68030,
  "AC0",     1,               m68030,
  "AC1",     3,               m68030,
#endif

/* movec control registers */
  "SFC",     0x000,           m68010up|cpu32,
  "DFC",     0x001,           m68010up|cpu32,
  "CACR",    0x002,           m68020up|mcf,
  "ASID",    0x003,           mcf,
  "TC",      0x003,           m68040up,
  "ITT0",    0x004,           m68040up,
  "ITT1",    0x005,           m68040up,
  "DTT0",    0x006,           m68040up,
  "DTT1",    0x007,           m68040up,
  "IACR0",   0x004,           m68040up,
  "IACR1",   0x005,           m68040up,
  "DACR0",   0x006,           m68040up,
  "DACR1",   0x007,           m68040up,
  "ACR0",    0x004,           mcf,
  "ACR1",    0x005,           mcf,
  "ACR2",    0x006,           mcf,
  "ACR3",    0x007,           mcf,
  "BUSCR",   0x008,           m68060,
  "MMUBAR",  0x008,           mcf,
  "USP",     0x800,           m68000up|mcfb|mcfc,
  "VBR",     0x801,           m68010up|cpu32|mcf,
  "CAAR",    0x802,           m68020|m68030,
  "MSP",     0x803,           m68020up,
  "ISP",     0x804,           m68020up,
  "MMUSR",   0x805,           m68040up,
  "URP",     0x806,           m68040up,
  "SRP",     0x807,           m68040up,
  "PCR",     0x808,           m68060,
/*"PC",0x80f, @@@ hmmm?*/
  "ROMBAR",  0xc00,           mcf,
  "ROMBAR0", 0xc00,           mcf,
  "ROMBAR1", 0xc01,           mcf,
  "RAMBAR",  0xc04,           mcf,
  "RAMBAR0", 0xc04,           mcf,
  "RAMBAR1", 0xc05,           mcf,
  "MPCR",    0xc0c,           mcf,
  "EDRAMBAR",0xc0d,           mcf,
  "SECMBAR", 0xc0e,           mcf,
  "MBAR",    0xc0f,           mcf,
  "PCR1U0",  0xd02,           mcf,
  "PCR1L0",  0xd03,           mcf,
  "PCR2U0",  0xd04,           mcf,
  "PCR2L0",  0xd05,           mcf,
  "PCR3U0",  0xd06,           mcf,
  "PCR3L0",  0xd07,           mcf,
  "PCR1U1",  0xd0a,           mcf,
  "PCR1L1",  0xd0b,           mcf,
  "PCR2U1",  0xd0c,           mcf,
  "PCR2L1",  0xd0d,           mcf,
  "PCR3U1",  0xd0e,           mcf,
  "PCR3L1",  0xd0f,           mcf,
