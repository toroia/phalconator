
extern zend_class_entry *phalconator_mvc_entityinterface_ce;

ZEPHIR_INIT_CLASS(Phalconator_Mvc_EntityInterface);

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalconator_mvc_entityinterface_readattribute, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, attribute, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, attribute)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_phalconator_mvc_entityinterface_writeattribute, 0, 0, 2)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, attribute, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, attribute)
#endif
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalconator_mvc_entityinterface_method_entry) {
	PHP_ABSTRACT_ME(Phalconator_Mvc_EntityInterface, readAttribute, arginfo_phalconator_mvc_entityinterface_readattribute)
	PHP_ABSTRACT_ME(Phalconator_Mvc_EntityInterface, writeAttribute, arginfo_phalconator_mvc_entityinterface_writeattribute)
	PHP_FE_END
};
