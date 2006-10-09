/*-
 * Copyright (c) 2003 Lev Walkin <vlm@lionet.info>. All rights reserved.
 * Redistribution and modifications are permitted subject to BSD license.
 */
#include <asn_internal.h>
#include <TeletexString.h>

/*
 * TeletexString basic type description.
 */
static ber_tlv_tag_t asn_DEF_TeletexString_tags[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (20 << 2)),	/* [UNIVERSAL 20] IMPLICIT ...*/
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),	/* ... OCTET STRING */
};
asn_TYPE_descriptor_t asn_DEF_TeletexString = {
	"TeletexString",
	"TeletexString",
	OCTET_STRING_free,
	OCTET_STRING_print,         /* non-ascii string */
	asn_generic_unknown_constraint,
	OCTET_STRING_decode_ber,    /* Implemented in terms of OCTET STRING */
	OCTET_STRING_encode_der,
	OCTET_STRING_decode_xer_hex,
	OCTET_STRING_encode_xer,
	OCTET_STRING_decode_uper,
	OCTET_STRING_encode_uper,
	0, /* Use generic outmost tag fetcher */
	asn_DEF_TeletexString_tags,
	sizeof(asn_DEF_TeletexString_tags)
	  / sizeof(asn_DEF_TeletexString_tags[0]) - 1,
	asn_DEF_TeletexString_tags,
	sizeof(asn_DEF_TeletexString_tags)
	  / sizeof(asn_DEF_TeletexString_tags[0]),
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	0	/* No specifics */
};

