
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


/**
 * This file is part of the Phalconator extension for Phalcon Framework.
 *
 * Copyright (C) Toroia Team <contact@toroia.fr>
 *
 * For the full copyright and license information, please view the LICENSE.txt
 * file that was distributed with this source code.
 */
/**
 * Phalconator\Mvc\Collection\Manager
 *
 * This components controls the initialization of models, keeping record of relations
 * between the different models of the application.
 *
 * A CollectionManager is injected to a model via a Dependency Injector Container such as Phalcon\Di.
 *
 * <code>
 * $di = new \Phalcon\Di();
 *
 * $di->set(
 *     "collectionManager",
 *     function() {
 *         return new \Phalcon\Mvc\Collection\Manager();
 *     }
 * );
 *
 * $robot = new Robots(di);
 * </code>
 */
ZEPHIR_INIT_CLASS(Phalconator_Mvc_Collection_ManagerInterface) {

	ZEPHIR_REGISTER_INTERFACE(Phalconator\\Mvc\\Collection, ManagerInterface, phalconator, mvc_collection_managerinterface, phalconator_mvc_collection_managerinterface_method_entry);

	return SUCCESS;

}

/**
 * Sets a custom events manager for a specific model
 */
ZEPHIR_DOC_METHOD(Phalconator_Mvc_Collection_ManagerInterface, setCustomEventsManager);

/**
 * Returns a custom events manager related to a model
 */
ZEPHIR_DOC_METHOD(Phalconator_Mvc_Collection_ManagerInterface, getCustomEventsManager);

/**
 * Initializes a model in the models manager
 */
ZEPHIR_DOC_METHOD(Phalconator_Mvc_Collection_ManagerInterface, initialize);

/**
 * Check whether a model is already initialized
 */
ZEPHIR_DOC_METHOD(Phalconator_Mvc_Collection_ManagerInterface, isInitialized);

/**
 * Get the latest initialized model
 */
ZEPHIR_DOC_METHOD(Phalconator_Mvc_Collection_ManagerInterface, getLastInitialized);

/**
 * Sets a connection service for a specific model
 */
ZEPHIR_DOC_METHOD(Phalconator_Mvc_Collection_ManagerInterface, setConnectionService);

/**
 * Sets if a model must use implicit objects ids
 */
ZEPHIR_DOC_METHOD(Phalconator_Mvc_Collection_ManagerInterface, useImplicitObjectIds);

/**
 * Checks if a model is using implicit object ids
 */
ZEPHIR_DOC_METHOD(Phalconator_Mvc_Collection_ManagerInterface, isUsingImplicitObjectIds);

/**
 * Returns the connection related to a model
 */
ZEPHIR_DOC_METHOD(Phalconator_Mvc_Collection_ManagerInterface, getConnection);

/**
 * Receives events generated in the models and dispatches them to an events-manager if available
 * Notify the behaviors that are listening in the model
 */
ZEPHIR_DOC_METHOD(Phalconator_Mvc_Collection_ManagerInterface, notifyEvent);

/**
 * Binds a behavior to a collection
 */
ZEPHIR_DOC_METHOD(Phalconator_Mvc_Collection_ManagerInterface, addBehavior);

