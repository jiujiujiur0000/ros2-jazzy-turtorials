// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from more_interfaces:msg/AddressBook.idl
// generated code does not contain a copyright notice

#include "more_interfaces/msg/detail/address_book__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_more_interfaces
const rosidl_type_hash_t *
more_interfaces__msg__AddressBook__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdf, 0x9f, 0x8d, 0x67, 0xfd, 0x9f, 0x1d, 0xc3,
      0xe7, 0x22, 0xe9, 0xe9, 0x9c, 0x6b, 0x1c, 0x41,
      0x70, 0x69, 0xd2, 0x5e, 0x7e, 0xdb, 0xec, 0x28,
      0xa2, 0xcb, 0x96, 0xae, 0x0b, 0xa2, 0xa9, 0xac,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char more_interfaces__msg__AddressBook__TYPE_NAME[] = "more_interfaces/msg/AddressBook";

// Define type names, field names, and default values
static char more_interfaces__msg__AddressBook__FIELD_NAME__first_name[] = "first_name";
static char more_interfaces__msg__AddressBook__FIELD_NAME__last_name[] = "last_name";
static char more_interfaces__msg__AddressBook__FIELD_NAME__phone_number[] = "phone_number";
static char more_interfaces__msg__AddressBook__FIELD_NAME__phone_type[] = "phone_type";

static rosidl_runtime_c__type_description__Field more_interfaces__msg__AddressBook__FIELDS[] = {
  {
    {more_interfaces__msg__AddressBook__FIELD_NAME__first_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {more_interfaces__msg__AddressBook__FIELD_NAME__last_name, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {more_interfaces__msg__AddressBook__FIELD_NAME__phone_number, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {more_interfaces__msg__AddressBook__FIELD_NAME__phone_type, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
more_interfaces__msg__AddressBook__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {more_interfaces__msg__AddressBook__TYPE_NAME, 31, 31},
      {more_interfaces__msg__AddressBook__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 PHONE_TYPE_HOME=0\n"
  "uint8 PHONE_TYPE_WORK=1\n"
  "uint8 PHONE_TYPE_MOBILE=2\n"
  "\n"
  "string first_name\n"
  "string last_name\n"
  "string phone_number\n"
  "uint8 phone_type";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
more_interfaces__msg__AddressBook__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {more_interfaces__msg__AddressBook__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 146, 146},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
more_interfaces__msg__AddressBook__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *more_interfaces__msg__AddressBook__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
