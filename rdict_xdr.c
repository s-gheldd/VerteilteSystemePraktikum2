/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "rdict.h"

bool_t
xdr_upd(xdrs, objp)
	XDR *xdrs;
	upd *objp;
{

	if (!xdr_string(xdrs, &objp->upd_old, MAXWORD))
		return (FALSE);
	if (!xdr_string(xdrs, &objp->upd_new, MAXWORD))
		return (FALSE);
	return (TRUE);
}