/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: ce824cf273ec8fec1fe3b6eaac015a51f3e9dc6b */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RdKafka_Metadata_Partition___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

#if (PHP_VERSION_ID >= 80100)
ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_TYPE_INFO_EX(arginfo_class_RdKafka_Metadata_Partition_getId, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RdKafka_Metadata_Partition_getId, 0, 0, 0)
#endif
ZEND_END_ARG_INFO()

#define arginfo_class_RdKafka_Metadata_Partition_getErr arginfo_class_RdKafka_Metadata_Partition_getId

#define arginfo_class_RdKafka_Metadata_Partition_getLeader arginfo_class_RdKafka_Metadata_Partition_getId

#if (PHP_VERSION_ID >= 80100)
ZEND_BEGIN_ARG_WITH_TENTATIVE_RETURN_OBJ_INFO_EX(arginfo_class_RdKafka_Metadata_Partition_getReplicas, 0, 0, RdKafka\\Metadata\\Collection, 0)
#else
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RdKafka_Metadata_Partition_getReplicas, 0, 0, 0)
#endif
ZEND_END_ARG_INFO()

#define arginfo_class_RdKafka_Metadata_Partition_getIsrs arginfo_class_RdKafka_Metadata_Partition_getReplicas

ZEND_METHOD(RdKafka, __construct);
ZEND_METHOD(RdKafka_Metadata_Partition, getId);
ZEND_METHOD(RdKafka_Metadata_Partition, getErr);
ZEND_METHOD(RdKafka_Metadata_Partition, getLeader);
ZEND_METHOD(RdKafka_Metadata_Partition, getReplicas);
ZEND_METHOD(RdKafka_Metadata_Partition, getIsrs);

static const zend_function_entry class_RdKafka_Metadata_Partition_methods[] = {
#if (PHP_VERSION_ID >= 80400)
	ZEND_RAW_FENTRY("__construct", zim_RdKafka___construct, arginfo_class_RdKafka_Metadata_Partition___construct, ZEND_ACC_PRIVATE, NULL, NULL)
#else
	ZEND_RAW_FENTRY("__construct", zim_RdKafka___construct, arginfo_class_RdKafka_Metadata_Partition___construct, ZEND_ACC_PRIVATE)
#endif
	ZEND_ME(RdKafka_Metadata_Partition, getId, arginfo_class_RdKafka_Metadata_Partition_getId, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Metadata_Partition, getErr, arginfo_class_RdKafka_Metadata_Partition_getErr, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Metadata_Partition, getLeader, arginfo_class_RdKafka_Metadata_Partition_getLeader, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Metadata_Partition, getReplicas, arginfo_class_RdKafka_Metadata_Partition_getReplicas, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Metadata_Partition, getIsrs, arginfo_class_RdKafka_Metadata_Partition_getIsrs, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_RdKafka_Metadata_Partition(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "RdKafka\\Metadata", "Partition", class_RdKafka_Metadata_Partition_methods);
#if (PHP_VERSION_ID >= 80400)
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, 0);
#else
	class_entry = zend_register_internal_class_ex(&ce, NULL);
#endif

	return class_entry;
}
