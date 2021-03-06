/*
 * Note: this file originally auto-generated by mib2c using
 *  $
 *
 * $Id:$
 */
#ifndef TPCLIENT1SEVERITYTABLE_OIDS_H
#define TPCLIENT1SEVERITYTABLE_OIDS_H

#ifdef __cplusplus
extern "C" {
#endif


/* column number definitions for table tpClient1SeverityTable */
#define TPCLIENT1SEVERITYTABLE_OID              1,3,6,1,4,1,43484,1,1,3,6,2


#define COLUMN_TPCLIENT1SEVERITYINDEX         1
    
#define COLUMN_TPCLIENT1SEVERITYFRAMERFSMMS         2
#define COLUMN_TPCLIENT1SEVERITYFRAMERFSMMS_FLAG    (0x1 << 0)
    
#define COLUMN_TPCLIENT1SEVERITYFRAMERFSSUSTS         3
#define COLUMN_TPCLIENT1SEVERITYFRAMERFSSUSTS_FLAG    (0x1 << 1)
    
#define COLUMN_TPCLIENT1SEVERITYFRAMERSOOF         4
#define COLUMN_TPCLIENT1SEVERITYFRAMERSOOF_FLAG    (0x1 << 2)
    
#define COLUMN_TPCLIENT1SEVERITYFRAMERSLOF         5
#define COLUMN_TPCLIENT1SEVERITYFRAMERSLOF_FLAG    (0x1 << 3)
    
#define COLUMN_TPCLIENT1SEVERITYFRAMERSIF         6
#define COLUMN_TPCLIENT1SEVERITYFRAMERSIF_FLAG    (0x1 << 4)
    
#define COLUMN_TPCLIENT1SEVERITYFRAMERFST         7
#define COLUMN_TPCLIENT1SEVERITYFRAMERFST_FLAG    (0x1 << 5)
    
#define COLUMN_TPCLIENT1SEVERITYLOSSTATLOSF         8
#define COLUMN_TPCLIENT1SEVERITYLOSSTATLOSF_FLAG    (0x1 << 6)
    
#define COLUMN_TPCLIENT1SEVERITYPATHMONACCSTAT         9
#define COLUMN_TPCLIENT1SEVERITYPATHMONACCSTAT_FLAG    (0x1 << 7)
    
#define COLUMN_TPCLIENT1SEVERITYPATHMONDAIS         10
#define COLUMN_TPCLIENT1SEVERITYPATHMONDAIS_FLAG    (0x1 << 8)
    
#define COLUMN_TPCLIENT1SEVERITYPATHMONDBDI         11
#define COLUMN_TPCLIENT1SEVERITYPATHMONDBDI_FLAG    (0x1 << 9)
    
#define COLUMN_TPCLIENT1SEVERITYPATHMONDLCK         12
#define COLUMN_TPCLIENT1SEVERITYPATHMONDLCK_FLAG    (0x1 << 10)
    
#define COLUMN_TPCLIENT1SEVERITYPATHMONMSIUNST         13
#define COLUMN_TPCLIENT1SEVERITYPATHMONMSIUNST_FLAG    (0x1 << 11)
    
#define COLUMN_TPCLIENT1SEVERITYSECMONBIPSFS         14
#define COLUMN_TPCLIENT1SEVERITYSECMONBIPSFS_FLAG    (0x1 << 12)
    
#define COLUMN_TPCLIENT1SEVERITYSECMONDBDI         15
#define COLUMN_TPCLIENT1SEVERITYSECMONDBDI_FLAG    (0x1 << 13)
    
#define COLUMN_TPCLIENT1SEVERITYSECMONDIAE         16
#define COLUMN_TPCLIENT1SEVERITYSECMONDIAE_FLAG    (0x1 << 14)
    
#define COLUMN_TPCLIENT1SEVERITYSECMONFLOM         17
#define COLUMN_TPCLIENT1SEVERITYSECMONFLOM_FLAG    (0x1 << 15)
    
#define COLUMN_TPCLIENT1SEVERITYSECMONLOM         18
#define COLUMN_TPCLIENT1SEVERITYSECMONLOM_FLAG    (0x1 << 16)
    

#define TPCLIENT1SEVERITYTABLE_MIN_COL   COLUMN_TPCLIENT1SEVERITYFRAMERFSMMS
#define TPCLIENT1SEVERITYTABLE_MAX_COL   COLUMN_TPCLIENT1SEVERITYSECMONLOM
    

    /*
     * TODO:405:r: Review TPCLIENT1SEVERITYTABLE_SETTABLE_COLS macro.
     * OR together all the writable cols.
     */
#define TPCLIENT1SEVERITYTABLE_SETTABLE_COLS (COLUMN_TPCLIENT1SEVERITYFRAMERFSMMS_FLAG | COLUMN_TPCLIENT1SEVERITYFRAMERFSSUSTS_FLAG | COLUMN_TPCLIENT1SEVERITYFRAMERSOOF_FLAG | COLUMN_TPCLIENT1SEVERITYFRAMERSLOF_FLAG | COLUMN_TPCLIENT1SEVERITYFRAMERSIF_FLAG | COLUMN_TPCLIENT1SEVERITYFRAMERFST_FLAG | COLUMN_TPCLIENT1SEVERITYLOSSTATLOSF_FLAG | COLUMN_TPCLIENT1SEVERITYPATHMONACCSTAT_FLAG | COLUMN_TPCLIENT1SEVERITYPATHMONDAIS_FLAG | COLUMN_TPCLIENT1SEVERITYPATHMONDBDI_FLAG | COLUMN_TPCLIENT1SEVERITYPATHMONDLCK_FLAG | COLUMN_TPCLIENT1SEVERITYPATHMONMSIUNST_FLAG | COLUMN_TPCLIENT1SEVERITYSECMONBIPSFS_FLAG | COLUMN_TPCLIENT1SEVERITYSECMONDBDI_FLAG | COLUMN_TPCLIENT1SEVERITYSECMONDIAE_FLAG | COLUMN_TPCLIENT1SEVERITYSECMONFLOM_FLAG | COLUMN_TPCLIENT1SEVERITYSECMONLOM_FLAG)

#ifdef __cplusplus
}
#endif

#endif /* TPCLIENT1SEVERITYTABLE_OIDS_H */
