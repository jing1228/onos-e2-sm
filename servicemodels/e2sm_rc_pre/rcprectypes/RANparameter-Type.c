/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-RC-PRE-IEs"
 * 	found in "e2sm-rc-pre-v1.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "RANparameter-Type.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_RANparameter_Type_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  3,  3,  0,  5 }	/* (0..5,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_RANparameter_Type_value2enum_1[] = {
	{ 0,	7,	"integer" },
	{ 1,	10,	"enumerated" },
	{ 2,	7,	"boolean" },
	{ 3,	10,	"bit-string" },
	{ 4,	12,	"octet-string" },
	{ 5,	16,	"printable-string" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_RANparameter_Type_enum2value_1[] = {
	3,	/* bit-string(3) */
	2,	/* boolean(2) */
	1,	/* enumerated(1) */
	0,	/* integer(0) */
	4,	/* octet-string(4) */
	5	/* printable-string(5) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_RANparameter_Type_specs_1 = {
	asn_MAP_RANparameter_Type_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_RANparameter_Type_enum2value_1,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	7,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_RANparameter_Type_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_RANparameter_Type = {
	"RANparameter-Type",
	"RANparameter-Type",
	&asn_OP_NativeEnumerated,
	asn_DEF_RANparameter_Type_tags_1,
	sizeof(asn_DEF_RANparameter_Type_tags_1)
		/sizeof(asn_DEF_RANparameter_Type_tags_1[0]), /* 1 */
	asn_DEF_RANparameter_Type_tags_1,	/* Same as above */
	sizeof(asn_DEF_RANparameter_Type_tags_1)
		/sizeof(asn_DEF_RANparameter_Type_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_RANparameter_Type_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_RANparameter_Type_specs_1	/* Additional specs */
};

