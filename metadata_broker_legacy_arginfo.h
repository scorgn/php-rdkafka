/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 74c6ee55c31bb86f5bcf71a46607f31688ce71dd */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RdKafka_Metadata_Broker___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_RdKafka_Metadata_Broker_getId, 0, 0, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_RdKafka_Metadata_Broker_getHost arginfo_class_RdKafka_Metadata_Broker_getId

#define arginfo_class_RdKafka_Metadata_Broker_getPort arginfo_class_RdKafka_Metadata_Broker_getId

ZEND_METHOD(RdKafka, __construct);
ZEND_METHOD(RdKafka_Metadata_Broker, getId);
ZEND_METHOD(RdKafka_Metadata_Broker, getHost);
ZEND_METHOD(RdKafka_Metadata_Broker, getPort);

static const zend_function_entry class_RdKafka_Metadata_Broker_methods[] = {
#if (PHP_VERSION_ID >= 80400)
	ZEND_RAW_FENTRY("__construct", zim_RdKafka___construct, arginfo_class_RdKafka_Metadata_Broker___construct, ZEND_ACC_PRIVATE, NULL, NULL)
#else
	ZEND_RAW_FENTRY("__construct", zim_RdKafka___construct, arginfo_class_RdKafka_Metadata_Broker___construct, ZEND_ACC_PRIVATE)
#endif
	ZEND_ME(RdKafka_Metadata_Broker, getId, arginfo_class_RdKafka_Metadata_Broker_getId, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Metadata_Broker, getHost, arginfo_class_RdKafka_Metadata_Broker_getHost, ZEND_ACC_PUBLIC)
	ZEND_ME(RdKafka_Metadata_Broker, getPort, arginfo_class_RdKafka_Metadata_Broker_getPort, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_RdKafka_Metadata_Broker(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "RdKafka\\Metadata", "Broker", class_RdKafka_Metadata_Broker_methods);
#if (PHP_VERSION_ID >= 80400)
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, 0);
#else
	class_entry = zend_register_internal_class_ex(&ce, NULL);
#endif

	return class_entry;
}
