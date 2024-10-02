/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 43c071a00a4c0beb6b5c1f8f685e29b746c2d3fb */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RdKafka_Metadata_Collection___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

#if (PHP_VERSION_ID >= 80100)
ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_RdKafka_Metadata_Collection_count, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RdKafka_Metadata_Collection_count, 0, 0, 0)
#endif
ZEND_END_ARG_INFO()

#if (PHP_VERSION_ID >= 80100)
ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_RdKafka_Metadata_Collection_current, 0, 0, IS_MIXED, 0)
#else
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RdKafka_Metadata_Collection_current, 0, 0, 0)
#endif
ZEND_END_ARG_INFO()

#define arginfo_class_RdKafka_Metadata_Collection_key arginfo_class_RdKafka_Metadata_Collection_count

#if (PHP_VERSION_ID >= 80100)
ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_RdKafka_Metadata_Collection_next, 0, 0, IS_VOID, 0)
#else
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RdKafka_Metadata_Collection_next, 0, 0, 0)
#endif
ZEND_END_ARG_INFO()

#define arginfo_class_RdKafka_Metadata_Collection_rewind arginfo_class_RdKafka_Metadata_Collection_next

#if (PHP_VERSION_ID >= 80100)
ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_RdKafka_Metadata_Collection_valid, 0, 0, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RdKafka_Metadata_Collection_valid, 0, 0, 0)
#endif
ZEND_END_ARG_INFO()

ZEND_METHOD(RdKafka, __construct);
ZEND_METHOD(RdKafka_Metadata_Collection, count);
ZEND_METHOD(RdKafka_Metadata_Collection, current);
ZEND_METHOD(RdKafka_Metadata_Collection, key);
ZEND_METHOD(RdKafka_Metadata_Collection, next);
ZEND_METHOD(RdKafka_Metadata_Collection, rewind);
ZEND_METHOD(RdKafka_Metadata_Collection, valid);

static const zend_function_entry class_RdKafka_Metadata_Collection_methods[] = {
#if (PHP_VERSION_ID >= 80400)
	ZEND_RAW_FENTRY("__construct", zim_RdKafka___construct, arginfo_class_RdKafka_Metadata_Collection___construct, ZEND_ACC_PRIVATE, NULL, NULL)
#else
	ZEND_RAW_FENTRY("__construct", zim_RdKafka___construct, arginfo_class_RdKafka_Metadata_Collection___construct, ZEND_ACC_PRIVATE)
#endif
	ZEND_ME(RdKafka_Metadata_Collection, count, arginfo_class_RdKafka_Metadata_Collection_count, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Metadata_Collection, current, arginfo_class_RdKafka_Metadata_Collection_current, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Metadata_Collection, key, arginfo_class_RdKafka_Metadata_Collection_key, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Metadata_Collection, next, arginfo_class_RdKafka_Metadata_Collection_next, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Metadata_Collection, rewind, arginfo_class_RdKafka_Metadata_Collection_rewind, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Metadata_Collection, valid, arginfo_class_RdKafka_Metadata_Collection_valid, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_RdKafka_Metadata_Collection(zend_class_entry *class_entry_Countable, zend_class_entry *class_entry_Iterator)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "RdKafka\\Metadata", "Collection", class_RdKafka_Metadata_Collection_methods);
#if (PHP_VERSION_ID >= 80400)
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, 0);
#else
	class_entry = zend_register_internal_class_ex(&ce, NULL);
#endif
	zend_class_implements(class_entry, 2, class_entry_Countable, class_entry_Iterator);

	return class_entry;
}
