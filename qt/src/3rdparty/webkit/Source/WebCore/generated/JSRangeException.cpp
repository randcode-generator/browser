/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSRangeException.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "KURL.h"
#include "RangeException.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSRangeException);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSRangeExceptionTableValues[5] =
{
    { "code", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRangeExceptionCode), (intptr_t)0 THUNK_GENERATOR(0) },
    { "name", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRangeExceptionName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "message", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRangeExceptionMessage), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRangeExceptionConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSRangeExceptionTable = { 10, 7, JSRangeExceptionTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSRangeExceptionConstructorTableValues[3] =
{
    { "BAD_BOUNDARYPOINTS_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRangeExceptionBAD_BOUNDARYPOINTS_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "INVALID_NODE_TYPE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRangeExceptionINVALID_NODE_TYPE_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSRangeExceptionConstructorTable = { 4, 3, JSRangeExceptionConstructorTableValues, 0 };
class JSRangeExceptionConstructor : public DOMConstructorObject {
public:
    JSRangeExceptionConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSRangeExceptionConstructor::s_info = { "RangeExceptionConstructor", &DOMConstructorObject::s_info, &JSRangeExceptionConstructorTable, 0 };

JSRangeExceptionConstructor::JSRangeExceptionConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSRangeExceptionPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSRangeExceptionConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSRangeExceptionConstructor, JSDOMWrapper>(exec, &JSRangeExceptionConstructorTable, this, propertyName, slot);
}

bool JSRangeExceptionConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSRangeExceptionConstructor, JSDOMWrapper>(exec, &JSRangeExceptionConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSRangeExceptionPrototypeTableValues[4] =
{
    { "BAD_BOUNDARYPOINTS_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRangeExceptionBAD_BOUNDARYPOINTS_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "INVALID_NODE_TYPE_ERR", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsRangeExceptionINVALID_NODE_TYPE_ERR), (intptr_t)0 THUNK_GENERATOR(0) },
    { "toString", DontDelete | DontEnum | Function, (intptr_t)static_cast<NativeFunction>(jsRangeExceptionPrototypeFunctionToString), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSRangeExceptionPrototypeTable = { 8, 7, JSRangeExceptionPrototypeTableValues, 0 };
const ClassInfo JSRangeExceptionPrototype::s_info = { "RangeExceptionPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSRangeExceptionPrototypeTable, 0 };

JSObject* JSRangeExceptionPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSRangeException>(exec, globalObject);
}

bool JSRangeExceptionPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSRangeExceptionPrototype, JSObject>(exec, &JSRangeExceptionPrototypeTable, this, propertyName, slot);
}

bool JSRangeExceptionPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticPropertyDescriptor<JSRangeExceptionPrototype, JSObject>(exec, &JSRangeExceptionPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSRangeException::s_info = { "RangeException", &JSDOMWrapper::s_info, &JSRangeExceptionTable, 0 };

JSRangeException::JSRangeException(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<RangeException> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSRangeException::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSRangeExceptionPrototype(exec->globalData(), globalObject, JSRangeExceptionPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSRangeException::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSRangeException, Base>(exec, &JSRangeExceptionTable, this, propertyName, slot);
}

bool JSRangeException::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSRangeException, Base>(exec, &JSRangeExceptionTable, this, propertyName, descriptor);
}

JSValue jsRangeExceptionCode(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSRangeException* castedThis = static_cast<JSRangeException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    RangeException* imp = static_cast<RangeException*>(castedThis->impl());
    JSValue result = jsNumber(imp->code());
    return result;
}


JSValue jsRangeExceptionName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSRangeException* castedThis = static_cast<JSRangeException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    RangeException* imp = static_cast<RangeException*>(castedThis->impl());
    JSValue result = jsString(exec, imp->name());
    return result;
}


JSValue jsRangeExceptionMessage(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSRangeException* castedThis = static_cast<JSRangeException*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    RangeException* imp = static_cast<RangeException*>(castedThis->impl());
    JSValue result = jsString(exec, imp->message());
    return result;
}


JSValue jsRangeExceptionConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSRangeException* domObject = static_cast<JSRangeException*>(asObject(slotBase));
    return JSRangeException::getConstructor(exec, domObject->globalObject());
}

JSValue JSRangeException::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSRangeExceptionConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsRangeExceptionPrototypeFunctionToString(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSRangeException::s_info))
        return throwVMTypeError(exec);
    JSRangeException* castedThis = static_cast<JSRangeException*>(asObject(thisValue));
    RangeException* imp = static_cast<RangeException*>(castedThis->impl());


    JSC::JSValue result = jsString(exec, imp->toString());
    return JSValue::encode(result);
}

// Constant getters

JSValue jsRangeExceptionBAD_BOUNDARYPOINTS_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(1));
}

JSValue jsRangeExceptionINVALID_NODE_TYPE_ERR(ExecState* exec, JSValue, const Identifier&)
{
    UNUSED_PARAM(exec);
    return jsNumber(static_cast<int>(2));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, RangeException* impl)
{
    return wrap<JSRangeException>(exec, globalObject, impl);
}

RangeException* toRangeException(JSC::JSValue value)
{
    return value.inherits(&JSRangeException::s_info) ? static_cast<JSRangeException*>(asObject(value))->impl() : 0;
}

}
