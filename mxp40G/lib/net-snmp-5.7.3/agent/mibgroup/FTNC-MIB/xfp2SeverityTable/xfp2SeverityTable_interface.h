/*
 * Note: this file originally auto-generated by mib2c using
 *       version $ of $
 *
 * $Id:$
 */
/** @ingroup interface: Routines to interface to Net-SNMP
 *
 * \warning This code should not be modified, called directly,
 *          or used to interpret functionality. It is subject to
 *          change at any time.
 * 
 * @{
 */
/*
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 * ***                                                               ***
 * ***  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE  ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THIS FILE DOES NOT CONTAIN ANY USER EDITABLE CODE.      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THE GENERATED CODE IS INTERNAL IMPLEMENTATION, AND      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***    IS SUBJECT TO CHANGE WITHOUT WARNING IN FUTURE RELEASES.   ***
 * ***                                                               ***
 * ***                                                               ***
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 */
#ifndef XFP2SEVERITYTABLE_INTERFACE_H
#define XFP2SEVERITYTABLE_INTERFACE_H

#ifdef __cplusplus
extern "C" {
#endif


#include "../../xfp2SeverityTable.h"


/* ********************************************************************
 * Table declarations
 */

/* PUBLIC interface initialization routine */
void _xfp2SeverityTable_initialize_interface(xfp2SeverityTable_registration * user_ctx,
                                    u_long flags);
void _xfp2SeverityTable_shutdown_interface(xfp2SeverityTable_registration * user_ctx);

xfp2SeverityTable_registration *
xfp2SeverityTable_registration_get( void );

xfp2SeverityTable_registration *
xfp2SeverityTable_registration_set( xfp2SeverityTable_registration * newreg );

netsnmp_container *xfp2SeverityTable_container_get( void );
int xfp2SeverityTable_container_size( void );

u_int xfp2SeverityTable_dirty_get( void );
void xfp2SeverityTable_dirty_set( u_int status );

    xfp2SeverityTable_rowreq_ctx * xfp2SeverityTable_allocate_rowreq_ctx(void *);
void xfp2SeverityTable_release_rowreq_ctx(xfp2SeverityTable_rowreq_ctx *rowreq_ctx);

int xfp2SeverityTable_index_to_oid(netsnmp_index *oid_idx,
                            xfp2SeverityTable_mib_index *mib_idx);
int xfp2SeverityTable_index_from_oid(netsnmp_index *oid_idx,
                              xfp2SeverityTable_mib_index *mib_idx);

/*
 * access to certain internals. use with caution!
 */
void xfp2SeverityTable_valid_columns_set(netsnmp_column_info *vc);


#ifdef __cplusplus
}
#endif

#endif /* XFP2SEVERITYTABLE_INTERFACE_H */
/** @} */