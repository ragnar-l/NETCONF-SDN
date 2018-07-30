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
#ifndef XFP1TABLE_INTERFACE_H
#define XFP1TABLE_INTERFACE_H

#ifdef __cplusplus
extern "C" {
#endif


#include "../../xfp1Table.h"


/* ********************************************************************
 * Table declarations
 */

/* PUBLIC interface initialization routine */
void _xfp1Table_initialize_interface(xfp1Table_registration * user_ctx,
                                    u_long flags);
void _xfp1Table_shutdown_interface(xfp1Table_registration * user_ctx);

xfp1Table_registration *
xfp1Table_registration_get( void );

xfp1Table_registration *
xfp1Table_registration_set( xfp1Table_registration * newreg );

netsnmp_container *xfp1Table_container_get( void );
int xfp1Table_container_size( void );

    xfp1Table_rowreq_ctx * xfp1Table_allocate_rowreq_ctx(void *);
void xfp1Table_release_rowreq_ctx(xfp1Table_rowreq_ctx *rowreq_ctx);

int xfp1Table_index_to_oid(netsnmp_index *oid_idx,
                            xfp1Table_mib_index *mib_idx);
int xfp1Table_index_from_oid(netsnmp_index *oid_idx,
                              xfp1Table_mib_index *mib_idx);

/*
 * access to certain internals. use with caution!
 */
void xfp1Table_valid_columns_set(netsnmp_column_info *vc);


#ifdef __cplusplus
}
#endif

#endif /* XFP1TABLE_INTERFACE_H */
/** @} */