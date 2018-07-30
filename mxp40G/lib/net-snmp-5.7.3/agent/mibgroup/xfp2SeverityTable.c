/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $ 
 *
 * $Id:$
 */
/** \page MFD helper for xfp2SeverityTable
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
#include "xfp2SeverityTable.h"

#include <net-snmp/agent/mib_modules.h>

#include "FTNC-MIB/xfp2SeverityTable/xfp2SeverityTable_interface.h"

const oid xfp2SeverityTable_oid[] = { XFP2SEVERITYTABLE_OID };
const int xfp2SeverityTable_oid_size = OID_LENGTH(xfp2SeverityTable_oid);

xfp2SeverityTable_registration  xfp2SeverityTable_user_context;

void initialize_table_xfp2SeverityTable(void);
void shutdown_table_xfp2SeverityTable(void);

/**
 * Initializes the xfp2SeverityTable module
 */
void
init_xfp2SeverityTable(void)
{
    DEBUGMSGTL(("verbose:xfp2SeverityTable:init_xfp2SeverityTable","called\n"));

    /*
     * TODO:300:o: Perform xfp2SeverityTable one-time module initialization.
     */
     
    /*
     * here we initialize all the tables we're planning on supporting
     */
    if (should_init("xfp2SeverityTable"))
        initialize_table_xfp2SeverityTable();

} /* init_xfp2SeverityTable */

/**
 * Shut-down the xfp2SeverityTable module (agent is exiting)
 */
void
shutdown_xfp2SeverityTable(void)
{
    if (should_init("xfp2SeverityTable"))
        shutdown_table_xfp2SeverityTable();

}

/**
 * Initialize the table xfp2SeverityTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_xfp2SeverityTable(void)
{
	DEBUGMSGTL(("verbose:xfp2SeverityTable:initialize_table_xfp2SeverityTable","called\n"));

    xfp2SeverityTable_registration * user_context;
    u_long flags;

    /*
     * TODO:301:o: Perform xfp2SeverityTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize xfp2SeverityTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    /*
     * a netsnmp_data_list is a simple way to store void pointers. A simple
     * string token is used to add, find or remove pointers.
     */
    user_context = netsnmp_create_data_list("xfp2SeverityTable", NULL, NULL);
    
    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;
    
    /*
     * call interface initialization code
     */
    _xfp2SeverityTable_initialize_interface(user_context, flags);
} /* initialize_table_xfp2SeverityTable */

/**
 * Shutdown the table xfp2SeverityTable 
 */
void
shutdown_table_xfp2SeverityTable(void)
{
    /*
     * call interface shutdown code
     */
    _xfp2SeverityTable_shutdown_interface(&xfp2SeverityTable_user_context);
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
xfp2SeverityTable_rowreq_ctx_init(xfp2SeverityTable_rowreq_ctx *rowreq_ctx, void *user_init_ctx)
{
    DEBUGMSGTL(("verbose:xfp2SeverityTable:xfp2SeverityTable_rowreq_ctx_init","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);
    
    /*
     * TODO:210:o: |-> Perform extra xfp2SeverityTable rowreq initialization. (eg DEFVALS)
     */

    return MFD_SUCCESS;
} /* xfp2SeverityTable_rowreq_ctx_init */

/**
 * extra context cleanup
 *
 */
void xfp2SeverityTable_rowreq_ctx_cleanup(xfp2SeverityTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:xfp2SeverityTable:xfp2SeverityTable_rowreq_ctx_cleanup","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);
    
    /*
     * TODO:211:o: |-> Perform extra xfp2SeverityTable rowreq cleanup.
     */
} /* xfp2SeverityTable_rowreq_ctx_cleanup */

/**
 * pre-request callback
 *
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_ERROR                : other error
 */
int
xfp2SeverityTable_pre_request(xfp2SeverityTable_registration * user_context)
{
    DEBUGMSGTL(("verbose:xfp2SeverityTable:xfp2SeverityTable_pre_request","called\n"));

    /*
     * TODO:510:o: Perform xfp2SeverityTable pre-request actions.
     */

    return MFD_SUCCESS;
} /* xfp2SeverityTable_pre_request */

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
xfp2SeverityTable_post_request(xfp2SeverityTable_registration * user_context, int rc)
{
    DEBUGMSGTL(("verbose:xfp2SeverityTable:xfp2SeverityTable_post_request","called\n"));

    /*
     * TODO:511:o: Perform xfp2SeverityTable post-request actions.
     */

    /*
     * check to set if any rows were changed.
     */
    if (xfp2SeverityTable_dirty_get()) {
        /*
         * check if request was successful. If so, this would be
         * a good place to save data to its persistent store.
         */
        if (MFD_SUCCESS == rc) {
            /*
             * save changed rows, if you haven't already
             */
        }
        
        xfp2SeverityTable_dirty_set(0); /* clear table dirty flag */
    }

    return MFD_SUCCESS;
} /* xfp2SeverityTable_post_request */


/** @{ */