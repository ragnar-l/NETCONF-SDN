/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 */
#ifndef TXPPOWERTABLE_DATA_ACCESS_H
#define TXPPOWERTABLE_DATA_ACCESS_H

#ifdef __cplusplus
extern "C" {
#endif


/* *********************************************************************
 * function declarations
 */

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table txpPowerTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * FTNC-MIB::txpPowerTable is subid 2 of txpMiscellaneous.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.43484.2.9.2.2, length: 11
*/


    int txpPowerTable_init_data(txpPowerTable_registration * txpPowerTable_reg);


    /*
     * TODO:180:o: Review txpPowerTable cache timeout.
     * The number of seconds before the cache times out
     */
#define TXPPOWERTABLE_CACHE_TIMEOUT   1

void txpPowerTable_container_init(netsnmp_container **container_ptr_ptr,
                             netsnmp_cache *cache);
void txpPowerTable_container_shutdown(netsnmp_container *container_ptr);

int txpPowerTable_container_load(netsnmp_container *container);
void txpPowerTable_container_free(netsnmp_container *container);

int txpPowerTable_cache_load(netsnmp_container *container);
void txpPowerTable_cache_free(netsnmp_container *container);

    /*
    ***************************************************
    ***             START EXAMPLE CODE              ***
    ***---------------------------------------------***/
/* *********************************************************************
 * Since we have no idea how you really access your data, we'll go with
 * a worst case example: a flat text file.
 */
#define MAX_LINE_SIZE 256
    /*
    ***---------------------------------------------***
    ***              END  EXAMPLE CODE              ***
    ***************************************************/
    int txpPowerTable_row_prep( txpPowerTable_rowreq_ctx *rowreq_ctx);



#ifdef __cplusplus
}
#endif

#endif /* TXPPOWERTABLE_DATA_ACCESS_H */