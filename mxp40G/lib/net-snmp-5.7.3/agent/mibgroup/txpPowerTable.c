/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
/** \page MFD helper for txpPowerTable
 *
 * \section intro Introduction
 * Introductory text.
 *
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-features.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "txpPowerTable.h"

#include <net-snmp/agent/mib_modules.h>

#include "FTNC-MIB/txpPowerTable/txpPowerTable_interface.h"

const oid txpPowerTable_oid[] = { TXPPOWERTABLE_OID };
const int txpPowerTable_oid_size = OID_LENGTH(txpPowerTable_oid);

    txpPowerTable_registration  txpPowerTable_user_context;

void initialize_table_txpPowerTable(void);
void shutdown_table_txpPowerTable(void);


/**
 * Initializes the txpPowerTable module
 */
void
init_txpPowerTable(void)
{
    DEBUGMSGTL(("verbose:txpPowerTable:init_txpPowerTable","called\n"));

    /*
     * TODO:300:o: Perform txpPowerTable one-time module initialization.
     */
     
    /*
     * here we initialize all the tables we're planning on supporting
     */
    if (should_init("txpPowerTable"))
        initialize_table_txpPowerTable();

} /* init_txpPowerTable */

/**
 * Shut-down the txpPowerTable module (agent is exiting)
 */
void
shutdown_txpPowerTable(void)
{
    if (should_init("txpPowerTable"))
        shutdown_table_txpPowerTable();

}

/**
 * Initialize the table txpPowerTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_txpPowerTable(void)
{
    txpPowerTable_registration * user_context;
    u_long flags;

    DEBUGMSGTL(("verbose:txpPowerTable:initialize_table_txpPowerTable","called\n"));

    /*
     * TODO:301:o: Perform txpPowerTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize txpPowerTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    /*
     * a netsnmp_data_list is a simple way to store void pointers. A simple
     * string token is used to add, find or remove pointers.
     */
    user_context = netsnmp_create_data_list("txpPowerTable", NULL, NULL);
    
    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;
    
    /*
     * call interface initialization code
     */
    _txpPowerTable_initialize_interface(user_context, flags);
} /* initialize_table_txpPowerTable */

/**
 * Shutdown the table txpPowerTable 
 */
void
shutdown_table_txpPowerTable(void)
{
    /*
     * call interface shutdown code
     */
    _txpPowerTable_shutdown_interface(&txpPowerTable_user_context);
}

/**
 * extra context initialization (eg default values)
 *
 * @param rowreq_ctx    : row request context
 * @param user_init_ctx : void pointer for user (parameter to rowreq_ctx_allocate)
 *
 * @retval MFD_SUCCESS  : no errors
 * @retval MFD_ERROR    : error (context allocate will fail)
 */
int
txpPowerTable_rowreq_ctx_init(txpPowerTable_rowreq_ctx *rowreq_ctx,
                           void *user_init_ctx)
{
    DEBUGMSGTL(("verbose:txpPowerTable:txpPowerTable_rowreq_ctx_init","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);
    
    /*
     * TODO:210:o: |-> Perform extra txpPowerTable rowreq initialization. (eg DEFVALS)
     */

    return MFD_SUCCESS;
} /* txpPowerTable_rowreq_ctx_init */

/**
 * extra context cleanup
 *
 */
void txpPowerTable_rowreq_ctx_cleanup(txpPowerTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:txpPowerTable:txpPowerTable_rowreq_ctx_cleanup","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);
    
    /*
     * TODO:211:o: |-> Perform extra txpPowerTable rowreq cleanup.
     */
} /* txpPowerTable_rowreq_ctx_cleanup */

/**
 * pre-request callback
 *
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_ERROR                : other error
 */
int
txpPowerTable_pre_request(txpPowerTable_registration * user_context)
{
    DEBUGMSGTL(("verbose:txpPowerTable:txpPowerTable_pre_request","called\n"));

    /*
     * TODO:510:o: Perform txpPowerTable pre-request actions.
     */

    return MFD_SUCCESS;
} /* txpPowerTable_pre_request */

/**
 * post-request callback
 *
 * Note:
 *   New rows have been inserted into the container, and
 *   deleted rows have been removed from the container and
 *   released.
 *
 * @param user_context
 * @param rc : MFD_SUCCESS if all requests succeeded
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : other error (ignored)
 */
int
txpPowerTable_post_request(txpPowerTable_registration * user_context, int rc)
{
    DEBUGMSGTL(("verbose:txpPowerTable:txpPowerTable_post_request","called\n"));

    /*
     * TODO:511:o: Perform txpPowerTable post-request actions.
     */

    return MFD_SUCCESS;
} /* txpPowerTable_post_request */


/** @{ */