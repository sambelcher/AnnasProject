/*
 * Copyright 2018 Google
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9.2 */

#include "query.nanopb.h"

namespace firebase {
namespace firestore {

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t google_firestore_v1_StructuredQuery_fields[9] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, google_firestore_v1_StructuredQuery, select, select, &google_firestore_v1_StructuredQuery_Projection_fields),
    PB_FIELD(  2, MESSAGE , REPEATED, POINTER , OTHER, google_firestore_v1_StructuredQuery, from, select, &google_firestore_v1_StructuredQuery_CollectionSelector_fields),
    PB_FIELD(  3, MESSAGE , SINGULAR, STATIC  , OTHER, google_firestore_v1_StructuredQuery, where, from, &google_firestore_v1_StructuredQuery_Filter_fields),
    PB_FIELD(  4, MESSAGE , REPEATED, POINTER , OTHER, google_firestore_v1_StructuredQuery, order_by, where, &google_firestore_v1_StructuredQuery_Order_fields),
    PB_FIELD(  5, MESSAGE , SINGULAR, STATIC  , OTHER, google_firestore_v1_StructuredQuery, limit, order_by, &google_protobuf_Int32Value_fields),
    PB_FIELD(  6, INT32   , SINGULAR, STATIC  , OTHER, google_firestore_v1_StructuredQuery, offset, limit, 0),
    PB_FIELD(  7, MESSAGE , SINGULAR, STATIC  , OTHER, google_firestore_v1_StructuredQuery, start_at, offset, &google_firestore_v1_Cursor_fields),
    PB_FIELD(  8, MESSAGE , SINGULAR, STATIC  , OTHER, google_firestore_v1_StructuredQuery, end_at, start_at, &google_firestore_v1_Cursor_fields),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_StructuredQuery_CollectionSelector_fields[3] = {
    PB_FIELD(  2, BYTES   , SINGULAR, POINTER , FIRST, google_firestore_v1_StructuredQuery_CollectionSelector, collection_id, collection_id, 0),
    PB_FIELD(  3, BOOL    , SINGULAR, STATIC  , OTHER, google_firestore_v1_StructuredQuery_CollectionSelector, all_descendants, collection_id, 0),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_StructuredQuery_Filter_fields[4] = {
    PB_ANONYMOUS_ONEOF_FIELD(filter_type,   1, MESSAGE , ONEOF, STATIC  , FIRST, google_firestore_v1_StructuredQuery_Filter, composite_filter, composite_filter, &google_firestore_v1_StructuredQuery_CompositeFilter_fields),
    PB_ANONYMOUS_ONEOF_FIELD(filter_type,   2, MESSAGE , ONEOF, STATIC  , UNION, google_firestore_v1_StructuredQuery_Filter, field_filter, field_filter, &google_firestore_v1_StructuredQuery_FieldFilter_fields),
    PB_ANONYMOUS_ONEOF_FIELD(filter_type,   3, MESSAGE , ONEOF, STATIC  , UNION, google_firestore_v1_StructuredQuery_Filter, unary_filter, unary_filter, &google_firestore_v1_StructuredQuery_UnaryFilter_fields),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_StructuredQuery_CompositeFilter_fields[3] = {
    PB_FIELD(  1, UENUM   , SINGULAR, STATIC  , FIRST, google_firestore_v1_StructuredQuery_CompositeFilter, op, op, 0),
    PB_FIELD(  2, MESSAGE , REPEATED, POINTER , OTHER, google_firestore_v1_StructuredQuery_CompositeFilter, filters, op, &google_firestore_v1_StructuredQuery_Filter_fields),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_StructuredQuery_FieldFilter_fields[4] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, google_firestore_v1_StructuredQuery_FieldFilter, field, field, &google_firestore_v1_StructuredQuery_FieldReference_fields),
    PB_FIELD(  2, UENUM   , SINGULAR, STATIC  , OTHER, google_firestore_v1_StructuredQuery_FieldFilter, op, field, 0),
    PB_FIELD(  3, MESSAGE , SINGULAR, STATIC  , OTHER, google_firestore_v1_StructuredQuery_FieldFilter, value, op, &google_firestore_v1_Value_fields),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_StructuredQuery_UnaryFilter_fields[3] = {
    PB_FIELD(  1, UENUM   , SINGULAR, STATIC  , FIRST, google_firestore_v1_StructuredQuery_UnaryFilter, op, op, 0),
    PB_ANONYMOUS_ONEOF_FIELD(operand_type,   2, MESSAGE , ONEOF, STATIC  , OTHER, google_firestore_v1_StructuredQuery_UnaryFilter, field, op, &google_firestore_v1_StructuredQuery_FieldReference_fields),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_StructuredQuery_Order_fields[3] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, google_firestore_v1_StructuredQuery_Order, field, field, &google_firestore_v1_StructuredQuery_FieldReference_fields),
    PB_FIELD(  2, UENUM   , SINGULAR, STATIC  , OTHER, google_firestore_v1_StructuredQuery_Order, direction, field, 0),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_StructuredQuery_FieldReference_fields[2] = {
    PB_FIELD(  2, BYTES   , SINGULAR, POINTER , FIRST, google_firestore_v1_StructuredQuery_FieldReference, field_path, field_path, 0),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_StructuredQuery_Projection_fields[2] = {
    PB_FIELD(  2, MESSAGE , REPEATED, POINTER , FIRST, google_firestore_v1_StructuredQuery_Projection, fields, fields, &google_firestore_v1_StructuredQuery_FieldReference_fields),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_Cursor_fields[3] = {
    PB_FIELD(  1, MESSAGE , REPEATED, POINTER , FIRST, google_firestore_v1_Cursor, values, values, &google_firestore_v1_Value_fields),
    PB_FIELD(  2, BOOL    , SINGULAR, STATIC  , OTHER, google_firestore_v1_Cursor, before, values, 0),
    PB_LAST_FIELD
};






/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(google_firestore_v1_StructuredQuery, select) < 65536 && pb_membersize(google_firestore_v1_StructuredQuery, where) < 65536 && pb_membersize(google_firestore_v1_StructuredQuery, start_at) < 65536 && pb_membersize(google_firestore_v1_StructuredQuery, end_at) < 65536 && pb_membersize(google_firestore_v1_StructuredQuery, limit) < 65536 && pb_membersize(google_firestore_v1_StructuredQuery_Filter, composite_filter) < 65536 && pb_membersize(google_firestore_v1_StructuredQuery_Filter, field_filter) < 65536 && pb_membersize(google_firestore_v1_StructuredQuery_Filter, unary_filter) < 65536 && pb_membersize(google_firestore_v1_StructuredQuery_FieldFilter, field) < 65536 && pb_membersize(google_firestore_v1_StructuredQuery_FieldFilter, value) < 65536 && pb_membersize(google_firestore_v1_StructuredQuery_UnaryFilter, field) < 65536 && pb_membersize(google_firestore_v1_StructuredQuery_Order, field) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_google_firestore_v1_StructuredQuery_google_firestore_v1_StructuredQuery_CollectionSelector_google_firestore_v1_StructuredQuery_Filter_google_firestore_v1_StructuredQuery_CompositeFilter_google_firestore_v1_StructuredQuery_FieldFilter_google_firestore_v1_StructuredQuery_UnaryFilter_google_firestore_v1_StructuredQuery_Order_google_firestore_v1_StructuredQuery_FieldReference_google_firestore_v1_StructuredQuery_Projection_google_firestore_v1_Cursor)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(google_firestore_v1_StructuredQuery, select) < 256 && pb_membersize(google_firestore_v1_StructuredQuery, where) < 256 && pb_membersize(google_firestore_v1_StructuredQuery, start_at) < 256 && pb_membersize(google_firestore_v1_StructuredQuery, end_at) < 256 && pb_membersize(google_firestore_v1_StructuredQuery, limit) < 256 && pb_membersize(google_firestore_v1_StructuredQuery_Filter, composite_filter) < 256 && pb_membersize(google_firestore_v1_StructuredQuery_Filter, field_filter) < 256 && pb_membersize(google_firestore_v1_StructuredQuery_Filter, unary_filter) < 256 && pb_membersize(google_firestore_v1_StructuredQuery_FieldFilter, field) < 256 && pb_membersize(google_firestore_v1_StructuredQuery_FieldFilter, value) < 256 && pb_membersize(google_firestore_v1_StructuredQuery_UnaryFilter, field) < 256 && pb_membersize(google_firestore_v1_StructuredQuery_Order, field) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_google_firestore_v1_StructuredQuery_google_firestore_v1_StructuredQuery_CollectionSelector_google_firestore_v1_StructuredQuery_Filter_google_firestore_v1_StructuredQuery_CompositeFilter_google_firestore_v1_StructuredQuery_FieldFilter_google_firestore_v1_StructuredQuery_UnaryFilter_google_firestore_v1_StructuredQuery_Order_google_firestore_v1_StructuredQuery_FieldReference_google_firestore_v1_StructuredQuery_Projection_google_firestore_v1_Cursor)
#endif


}  // namespace firestore
}  // namespace firebase

/* @@protoc_insertion_point(eof) */
