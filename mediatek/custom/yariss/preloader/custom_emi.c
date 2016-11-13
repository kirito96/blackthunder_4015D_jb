
#include "mt_emi.h"
             
#define NUM_EMI_RECORD 6
             
int num_of_emi_records = NUM_EMI_RECORD ;
             
EMI_SETTINGS emi_settings[] =
{            
          {
        	   0x202,  /* TYPE  eMMC + LPDDR2 */
        	   {0x15,0x01,0x00,0x4E,0x35,0x55,0x30,0x30,0x4D},  /* NAND_EMMC_ID */
        	   9,  /* EMMC and NAND ID/FW ID checking length */
        	   266,   /*EMI freq */
        	   0xCCCCCCCC,  /* EMI_DRVA_value */
        	   0x00CC0000,  /* EMI_DRVB_value */
        	   0x00000000,  /* EMI_ODLA_value */
        	   0x00000000,  /* EMI_ODLB_value */
        	   0x00000000,  /* EMI_ODLC_value */
        	   0x00000000,  /* EMI_ODLD_value */
        	   0x00000000,  /* EMI_ODLE_value */
        	   0x00000000,  /* EMI_ODLF_value */
        	   0x00000000,  /* EMI_ODLG_value */
        	   0x00000000,  /* EMI_ODLH_value */
        	   0x00000000,  /* EMI_ODLI_value */
        	   0x00000000,  /* EMI_ODLJ_value */
        	   0x00000000,  /* EMI_ODLK_value */
        	   0x00000000,  /* EMI_ODLL_value */
        	   0x00000000,  /* EMI_ODLM_value */
        	   0x00000000,  /* EMI_ODLN_value */
        	   
        	   0x02030000,  /* EMI_CONI_value */  /* set DRAM driving */
        	   0x40503763,  /* EMI_CONJ_value */
        	   0x23051020,  /* EMI_CONK_value */
        	   0x60428098,  /* EMI_CONL_value */
        	   0x00450800,  /* EMI_CONN_value */  /* remember set bank number */
        	   
        	   0x00000000,  /* EMI_DUTA_value */
        	   0x00000000,  /* EMI_DUTB_value */
        	   0x00000000,  /* EMI_DUTC_value */
        	   
        	   0x00000000,  /* EMI_DUCA_value*/
        	   0x00000000,  /* EMI_DUCB_value*/
        	   0x00000000,  /* EMI_DUCE_value*/
        	   
        	   0x00030000,  /* EMI_IOCL_value */
        	   
        	   0x00010000,  /* EMI_GEND_value */
        	   
        	   {0x20000000, 0x00000000,0,0},  /* DRAM RANK SIZE  4Gb/rank */
             {0,0}  /* reserved 2 */
        },
        {
        	   0x202,  /* TYPE  eMMC + LPDDR2 */
        	   { 0xfe,0x01,0x4e,0x50,0x30,0x58,0x58,0x58,0x58},  /* NAND_EMMC_ID */
        	   9,  /* EMMC and NAND ID/FW ID checking length */
        	   266,   /*EMI freq */
        	   0xAAAAAAAA,  /* EMI_DRVA_value */
        	   0x00AA0000,  /* EMI_DRVB_value */
        	   0x00000000,  /* EMI_ODLA_value */
        	   0x00000000,  /* EMI_ODLB_value */
        	   0x00000000,  /* EMI_ODLC_value */
        	   0x00000000,  /* EMI_ODLD_value */
        	   0x00000000,  /* EMI_ODLE_value */
        	   0x00000000,  /* EMI_ODLF_value */
        	   0x00000000,  /* EMI_ODLG_value */
        	   0x00000000,  /* EMI_ODLH_value */
        	   0x00000000,  /* EMI_ODLI_value */
        	   0x00000000,  /* EMI_ODLJ_value */
        	   0x00000000,  /* EMI_ODLK_value */
        	   0x00000000,  /* EMI_ODLL_value */
        	   0x00000000,  /* EMI_ODLM_value */
        	   0x00000000,  /* EMI_ODLN_value */
        	   
        	   0x02030000,  /* EMI_CONI_value */  /* set DRAM driving */
        	   0x40503763,  /* EMI_CONJ_value */
        	   0x23051020,  /* EMI_CONK_value */
        	   0x60428098,  /* EMI_CONL_value */
        	   0x00450800,  /* EMI_CONN_value */  /* remember set bank number */
        	   
        	   0x00000000,  /* EMI_DUTA_value */
        	   0x00000000,  /* EMI_DUTB_value */
        	   0x00000000,  /* EMI_DUTC_value */
        	   
        	   0x00000000,  /* EMI_DUCA_value*/
        	   0x00000000,  /* EMI_DUCB_value*/
        	   0x00000000,  /* EMI_DUCE_value*/
        	   
        	   0x00030000,  /* EMI_IOCL_value */
        	   
        	   0x00010000,  /* EMI_GEND_value */
        	   
        	   {0x20000000, 0x00000000,0,0},  /* DRAM RANK SIZE  4Gb/rank */
             {0,0}  /* reserved 2 */
        },
        {
        	   0x202,  /* TYPE  eMMC + LPDDR2 */
        	   { 0x15,0x01,0x00,0x4E,0x35,0x57,0x5A,0x4D,0x42},  /* NAND_EMMC_ID */
        	   9,  /* EMMC and NAND ID/FW ID checking length */
        	   266,   /*EMI freq */
        	   0xAAAAAAAA,  /* EMI_DRVA_value */
        	   0x00AA0000,  /* EMI_DRVB_value */
        	   0x00000000,  /* EMI_ODLA_value */
        	   0x00000000,  /* EMI_ODLB_value */
        	   0x00000000,  /* EMI_ODLC_value */
        	   0x00000000,  /* EMI_ODLD_value */
        	   0x00000000,  /* EMI_ODLE_value */
        	   0x00000000,  /* EMI_ODLF_value */
        	   0x00000000,  /* EMI_ODLG_value */
        	   0x00000000,  /* EMI_ODLH_value */
        	   0x00000000,  /* EMI_ODLI_value */
        	   0x00000000,  /* EMI_ODLJ_value */
        	   0x00000000,  /* EMI_ODLK_value */
        	   0x00000000,  /* EMI_ODLL_value */
        	   0x00000000,  /* EMI_ODLM_value */
        	   0x00000000,  /* EMI_ODLN_value */
        	   
        	   0x02030000,  /* EMI_CONI_value */  /* set DRAM driving */
        	   0x40503763,  /* EMI_CONJ_value */
        	   0x23051020,  /* EMI_CONK_value */
        	   0x60428098,  /* EMI_CONL_value */
        	   0x00450800,  /* EMI_CONN_value */  /* remember set bank number */
        	   
        	   0x00000000,  /* EMI_DUTA_value */
        	   0x00000000,  /* EMI_DUTB_value */
        	   0x00000000,  /* EMI_DUTC_value */
        	   
        	   0x00000000,  /* EMI_DUCA_value*/
        	   0x00000000,  /* EMI_DUCB_value*/
        	   0x00000000,  /* EMI_DUCE_value*/
        	   
        	   0x00030000,  /* EMI_IOCL_value */
        	   
        	   0x00010000,  /* EMI_GEND_value */
        	   
        	   {0x20000000, 0x00000000,0,0},  /* DRAM RANK SIZE  4Gb/rank */
             {0,0}  /* reserved 2 */
        },
        {
        	   0x202,  /* TYPE  eMMC + LPDDR2 */
        	   { 0x11,0x01,0x00,0x30,0x30,0x34,0x47,0x39,0x30},  /* NAND_EMMC_ID */
        	   9,  /* EMMC and NAND ID/FW ID checking length */
        	   266,   /*EMI freq */
        	   0xCCCCCCCC,  /* EMI_DRVA_value */
        	   0x00CC0000,  /* EMI_DRVB_value */
        	   0x00000000,  /* EMI_ODLA_value */
        	   0x00000000,  /* EMI_ODLB_value */
        	   0x00000000,  /* EMI_ODLC_value */
        	   0x00000000,  /* EMI_ODLD_value */
        	   0x00000000,  /* EMI_ODLE_value */
        	   0x00000000,  /* EMI_ODLF_value */
        	   0x00000000,  /* EMI_ODLG_value */
        	   0x00000000,  /* EMI_ODLH_value */
        	   0x00000000,  /* EMI_ODLI_value */
        	   0x00000000,  /* EMI_ODLJ_value */
        	   0x00000000,  /* EMI_ODLK_value */
        	   0x00000000,  /* EMI_ODLL_value */
        	   0x00000000,  /* EMI_ODLM_value */
        	   0x00000000,  /* EMI_ODLN_value */
        	   
        	   0x02030000,  /* EMI_CONI_value */  /* set DRAM driving */
        	   0x40503763,  /* EMI_CONJ_value */
        	   0x23051020,  /* EMI_CONK_value */
        	   0x60428098,  /* EMI_CONL_value */
        	   0x00450800,  /* EMI_CONN_value */  /* remember set bank number */
        	   
        	   0x00000000,  /* EMI_DUTA_value */
        	   0x00000000,  /* EMI_DUTB_value */
        	   0x00000000,  /* EMI_DUTC_value */
        	   
        	   0x00000000,  /* EMI_DUCA_value*/
        	   0x00000000,  /* EMI_DUCB_value*/
        	   0x00000000,  /* EMI_DUCE_value*/
        	   
        	   0x00030000,  /* EMI_IOCL_value */
        	   
        	   0x00010000,  /* EMI_GEND_value */
        	   
        	   {0x20000000, 0x00000000,0,0},  /* DRAM RANK SIZE  4Gb/rank */
             {0,0}  /* reserved 2 */
        },
        {
        	   0x202,  /* TYPE  eMMC + LPDDR2 */
        	   { 0x15,0x01,0x00,0x4E,0x35,0x58,0x5A,0x4D,0x42},  /* NAND_EMMC_ID */
        	   9,  /* EMMC and NAND ID/FW ID checking length */
        	   266,   /*EMI freq */
        	   0xAAAAAAAA,  /* EMI_DRVA_value */
        	   0x00AA0000,  /* EMI_DRVB_value */
        	   0x00000000,  /* EMI_ODLA_value */
        	   0x00000000,  /* EMI_ODLB_value */
        	   0x00000000,  /* EMI_ODLC_value */
        	   0x00000000,  /* EMI_ODLD_value */
        	   0x00000000,  /* EMI_ODLE_value */
        	   0x00000000,  /* EMI_ODLF_value */
        	   0x00000000,  /* EMI_ODLG_value */
        	   0x00000000,  /* EMI_ODLH_value */
        	   0x00000000,  /* EMI_ODLI_value */
        	   0x00000000,  /* EMI_ODLJ_value */
        	   0x00000000,  /* EMI_ODLK_value */
        	   0x00000000,  /* EMI_ODLL_value */
        	   0x00000000,  /* EMI_ODLM_value */
        	   0x00000000,  /* EMI_ODLN_value */
        	   
        	   0x02030000,  /* EMI_CONI_value */  /* set DRAM driving */
        	   0x40503763,  /* EMI_CONJ_value */
        	   0x23051020,  /* EMI_CONK_value */
        	   0x60428098,  /* EMI_CONL_value */
        	   0x00450800,  /* EMI_CONN_value */  /* remember set bank number */
        	   
        	   0x00000000,  /* EMI_DUTA_value */
        	   0x00000000,  /* EMI_DUTB_value */
        	   0x00000000,  /* EMI_DUTC_value */
        	   
        	   0x00000000,  /* EMI_DUCA_value*/
        	   0x00000000,  /* EMI_DUCB_value*/
        	   0x00000000,  /* EMI_DUCE_value*/
        	   
        	   0x00030000,  /* EMI_IOCL_value */
        	   
        	   0x00010000,  /* EMI_GEND_value */
        	   
        	   {0x20000000, 0x00000000,0,0},  /* DRAM RANK SIZE  4Gb/rank */
             {0,0}  /* reserved 2 */
        },
        {
        	   0x202,  /* TYPE  eMMC + LPDDR2 */
        	   { 0xFE,0x01,0x4E,0x50,0x31,0x4A,0x39,0x34,0x48},  /* NAND_EMMC_ID */
        	   9,  /* EMMC and NAND ID/FW ID checking length */
        	   266,   /*EMI freq */
        	   0xAAAAAAAA,  /* EMI_DRVA_value */
        	   0x00AA0000,  /* EMI_DRVB_value */
        	   0x00000000,  /* EMI_ODLA_value */
        	   0x00000000,  /* EMI_ODLB_value */
        	   0x00000000,  /* EMI_ODLC_value */
        	   0x00000000,  /* EMI_ODLD_value */
        	   0x00000000,  /* EMI_ODLE_value */
        	   0x00000000,  /* EMI_ODLF_value */
        	   0x00000000,  /* EMI_ODLG_value */
        	   0x00000000,  /* EMI_ODLH_value */
        	   0x00000000,  /* EMI_ODLI_value */
        	   0x00000000,  /* EMI_ODLJ_value */
        	   0x00000000,  /* EMI_ODLK_value */
        	   0x00000000,  /* EMI_ODLL_value */
        	   0x00000000,  /* EMI_ODLM_value */
        	   0x00000000,  /* EMI_ODLN_value */
        	   
        	   0x02030000,  /* EMI_CONI_value */  /* set DRAM driving */
        	   0x40503763,  /* EMI_CONJ_value */
        	   0x23051020,  /* EMI_CONK_value */
        	   0x60428098,  /* EMI_CONL_value */
        	   0x00450800,  /* EMI_CONN_value */  /* remember set bank number */
        	   
        	   0x00000000,  /* EMI_DUTA_value */
        	   0x00000000,  /* EMI_DUTB_value */
        	   0x00000000,  /* EMI_DUTC_value */
        	   
        	   0x00000000,  /* EMI_DUCA_value*/
        	   0x00000000,  /* EMI_DUCB_value*/
        	   0x00000000,  /* EMI_DUCE_value*/
        	   
        	   0x00030000,  /* EMI_IOCL_value */
        	   
        	   0x00010000,  /* EMI_GEND_value */
        	   
        	   {0x20000000, 0x00000000,0,0},  /* DRAM RANK SIZE  4Gb/rank */
             {0,0}  /* reserved 2 */
        }

}; 
