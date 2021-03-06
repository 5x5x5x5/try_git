#ifndef __PYX_HAVE__lxml__etree
#define __PYX_HAVE__lxml__etree

struct LxmlDocument;
struct LxmlElement;
struct LxmlElementTree;
struct LxmlElementTagMatcher;
struct LxmlElementIterator;
struct LxmlElementBase;
struct LxmlElementClassLookup;
struct LxmlFallbackElementClassLookup;

/* "/home/stefan/source/Python/lxml/lxml-release/src/lxml/lxml.etree.pyx":302
 * cdef class _BaseParser
 * cdef class QName
 * ctypedef public xmlNode* (*_node_to_node_function)(xmlNode*)             # <<<<<<<<<<<<<<
 * 
 * ################################################################################
 */
typedef xmlNode *(*_node_to_node_function)(xmlNode *);

/* "/home/stefan/source/Python/lxml/lxml-release/src/lxml/lxml.etree.pyx":298
 * 
 * # forward declarations
 * cdef public class _Document [ type LxmlDocumentType, object LxmlDocument ]             # <<<<<<<<<<<<<<
 * cdef public class _Element [ type LxmlElementType, object LxmlElement ]
 * cdef class _BaseParser
 */
struct LxmlDocument {
  PyObject_HEAD
  struct __pyx_vtabstruct_4lxml_5etree__Document *__pyx_vtab;
  int _ns_counter;
  PyObject *_prefix_tail;
  xmlDoc *_c_doc;
  struct __pyx_obj_4lxml_5etree__BaseParser *_parser;
};

/* "/home/stefan/source/Python/lxml/lxml-release/src/lxml/lxml.etree.pyx":299
 * # forward declarations
 * cdef public class _Document [ type LxmlDocumentType, object LxmlDocument ]
 * cdef public class _Element [ type LxmlElementType, object LxmlElement ]             # <<<<<<<<<<<<<<
 * cdef class _BaseParser
 * cdef class QName
 */
struct LxmlElement {
  PyObject_HEAD
  PyObject *_gc_doc;
  struct LxmlDocument *_doc;
  xmlNode *_c_node;
  PyObject *_tag;
};

/* "/home/stefan/source/Python/lxml/lxml-release/src/lxml/lxml.etree.pyx":1736
 * 
 * @cython.freelist(8)
 * cdef public class _ElementTree [ type LxmlElementTreeType,             # <<<<<<<<<<<<<<
 *                                  object LxmlElementTree ]:
 *     cdef _Document _doc
 */
struct LxmlElementTree {
  PyObject_HEAD
  struct __pyx_vtabstruct_4lxml_5etree__ElementTree *__pyx_vtab;
  struct LxmlDocument *_doc;
  struct LxmlElement *_context_node;
};

/* "/home/stefan/source/Python/lxml/lxml-release/src/lxml/lxml.etree.pyx":2398
 * 
 * 
 * cdef public class _ElementTagMatcher [ object LxmlElementTagMatcher,             # <<<<<<<<<<<<<<
 *                                        type LxmlElementTagMatcherType ]:
 *     """
 */
struct LxmlElementTagMatcher {
  PyObject_HEAD
  struct __pyx_vtabstruct_4lxml_5etree__ElementTagMatcher *__pyx_vtab;
  PyObject *_pystrings;
  int _node_type;
  char *_href;
  char *_name;
};

/* "/home/stefan/source/Python/lxml/lxml-release/src/lxml/lxml.etree.pyx":2429
 *                 self._name = NULL
 * 
 * cdef public class _ElementIterator(_ElementTagMatcher) [             # <<<<<<<<<<<<<<
 *     object LxmlElementIterator, type LxmlElementIteratorType ]:
 *     """
 */
struct LxmlElementIterator {
  struct LxmlElementTagMatcher __pyx_base;
  struct LxmlElement *_node;
  _node_to_node_function _next_element;
};

/* "/home/stefan/source/Python/lxml/lxml-release/src/lxml/classlookup.pxi":6
 * # Custom Element classes
 * 
 * cdef public class ElementBase(_Element) [ type LxmlElementBaseType,             # <<<<<<<<<<<<<<
 *                                           object LxmlElementBase ]:
 *     u"""ElementBase(*children, attrib=None, nsmap=None, **_extra)
 */
struct LxmlElementBase {
  struct LxmlElement __pyx_base;
};

/* "/home/stefan/source/Python/lxml/lxml-release/src/lxml/classlookup.pxi":211
 * # Element class lookup
 * 
 * ctypedef public object (*_element_class_lookup_function)(object, _Document, xmlNode*)             # <<<<<<<<<<<<<<
 * 
 * # class to store element class lookup functions
 */
typedef PyObject *(*_element_class_lookup_function)(PyObject *, struct LxmlDocument *, xmlNode *);

/* "/home/stefan/source/Python/lxml/lxml-release/src/lxml/classlookup.pxi":214
 * 
 * # class to store element class lookup functions
 * cdef public class ElementClassLookup [ type LxmlElementClassLookupType,             # <<<<<<<<<<<<<<
 *                                        object LxmlElementClassLookup ]:
 *     u"""ElementClassLookup(self)
 */
struct LxmlElementClassLookup {
  PyObject_HEAD
  _element_class_lookup_function _lookup_function;
};

/* "/home/stefan/source/Python/lxml/lxml-release/src/lxml/classlookup.pxi":223
 *         self._lookup_function = NULL # use default lookup
 * 
 * cdef public class FallbackElementClassLookup(ElementClassLookup) \             # <<<<<<<<<<<<<<
 *          [ type LxmlFallbackElementClassLookupType,
 *            object LxmlFallbackElementClassLookup ]:
 */
struct LxmlFallbackElementClassLookup {
  struct LxmlElementClassLookup __pyx_base;
  struct __pyx_vtabstruct_4lxml_5etree_FallbackElementClassLookup *__pyx_vtab;
  struct LxmlElementClassLookup *fallback;
  _element_class_lookup_function _fallback_function;
};

#ifndef __PYX_HAVE_API__lxml__etree

#ifndef __PYX_EXTERN_C
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

__PYX_EXTERN_C DL_IMPORT(PyTypeObject) LxmlElementType;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) LxmlElementTagMatcherType;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) LxmlElementClassLookupType;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) LxmlFallbackElementClassLookupType;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) LxmlDocumentType;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) LxmlElementTreeType;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) LxmlElementIteratorType;
__PYX_EXTERN_C DL_IMPORT(PyTypeObject) LxmlElementBaseType;

__PYX_EXTERN_C DL_IMPORT(struct LxmlElement) *deepcopyNodeToDocument(struct LxmlDocument *, xmlNode *);
__PYX_EXTERN_C DL_IMPORT(struct LxmlElementTree) *elementTreeFactory(struct LxmlElement *);
__PYX_EXTERN_C DL_IMPORT(struct LxmlElementTree) *newElementTree(struct LxmlElement *, PyObject *);
__PYX_EXTERN_C DL_IMPORT(struct LxmlElement) *elementFactory(struct LxmlDocument *, xmlNode *);
__PYX_EXTERN_C DL_IMPORT(struct LxmlElement) *makeElement(PyObject *, struct LxmlDocument *, PyObject *, PyObject *, PyObject *, PyObject *, PyObject *);
__PYX_EXTERN_C DL_IMPORT(struct LxmlElement) *makeSubElement(struct LxmlElement *, PyObject *, PyObject *, PyObject *, PyObject *, PyObject *);
__PYX_EXTERN_C DL_IMPORT(void) setElementClassLookupFunction(_element_class_lookup_function, PyObject *);
__PYX_EXTERN_C DL_IMPORT(PyObject) *lookupDefaultElementClass(PyObject *, PyObject *, xmlNode *);
__PYX_EXTERN_C DL_IMPORT(PyObject) *lookupNamespaceElementClass(PyObject *, PyObject *, xmlNode *);
__PYX_EXTERN_C DL_IMPORT(PyObject) *callLookupFallback(struct LxmlFallbackElementClassLookup *, struct LxmlDocument *, xmlNode *);
__PYX_EXTERN_C DL_IMPORT(int) tagMatches(xmlNode *, const xmlChar *, const xmlChar *);
__PYX_EXTERN_C DL_IMPORT(struct LxmlDocument) *documentOrRaise(PyObject *);
__PYX_EXTERN_C DL_IMPORT(struct LxmlElement) *rootNodeOrRaise(PyObject *);
__PYX_EXTERN_C DL_IMPORT(int) hasText(xmlNode *);
__PYX_EXTERN_C DL_IMPORT(int) hasTail(xmlNode *);
__PYX_EXTERN_C DL_IMPORT(PyObject) *textOf(xmlNode *);
__PYX_EXTERN_C DL_IMPORT(PyObject) *tailOf(xmlNode *);
__PYX_EXTERN_C DL_IMPORT(int) setNodeText(xmlNode *, PyObject *);
__PYX_EXTERN_C DL_IMPORT(int) setTailText(xmlNode *, PyObject *);
__PYX_EXTERN_C DL_IMPORT(PyObject) *attributeValue(xmlNode *, xmlAttr *);
__PYX_EXTERN_C DL_IMPORT(PyObject) *attributeValueFromNsName(xmlNode *, const xmlChar *, const xmlChar *);
__PYX_EXTERN_C DL_IMPORT(PyObject) *getAttributeValue(struct LxmlElement *, PyObject *, PyObject *);
__PYX_EXTERN_C DL_IMPORT(PyObject) *iterattributes(struct LxmlElement *, int);
__PYX_EXTERN_C DL_IMPORT(PyObject) *collectAttributes(xmlNode *, int);
__PYX_EXTERN_C DL_IMPORT(int) setAttributeValue(struct LxmlElement *, PyObject *, PyObject *);
__PYX_EXTERN_C DL_IMPORT(int) delAttribute(struct LxmlElement *, PyObject *);
__PYX_EXTERN_C DL_IMPORT(int) delAttributeFromNsName(xmlNode *, const xmlChar *, const xmlChar *);
__PYX_EXTERN_C DL_IMPORT(int) hasChild(xmlNode *);
__PYX_EXTERN_C DL_IMPORT(xmlNode) *findChild(xmlNode *, Py_ssize_t);
__PYX_EXTERN_C DL_IMPORT(xmlNode) *findChildForwards(xmlNode *, Py_ssize_t);
__PYX_EXTERN_C DL_IMPORT(xmlNode) *findChildBackwards(xmlNode *, Py_ssize_t);
__PYX_EXTERN_C DL_IMPORT(xmlNode) *nextElement(xmlNode *);
__PYX_EXTERN_C DL_IMPORT(xmlNode) *previousElement(xmlNode *);
__PYX_EXTERN_C DL_IMPORT(void) appendChild(struct LxmlElement *, struct LxmlElement *);
__PYX_EXTERN_C DL_IMPORT(PyObject) *pyunicode(const xmlChar *);
__PYX_EXTERN_C DL_IMPORT(PyObject) *utf8(PyObject *);
__PYX_EXTERN_C DL_IMPORT(PyObject) *getNsTag(PyObject *);
__PYX_EXTERN_C DL_IMPORT(PyObject) *getNsTagWithEmptyNs(PyObject *);
__PYX_EXTERN_C DL_IMPORT(PyObject) *namespacedName(xmlNode *);
__PYX_EXTERN_C DL_IMPORT(PyObject) *namespacedNameFromNsName(const xmlChar *, const xmlChar *);
__PYX_EXTERN_C DL_IMPORT(void) iteratorStoreNext(struct LxmlElementIterator *, struct LxmlElement *);
__PYX_EXTERN_C DL_IMPORT(void) initTagMatch(struct LxmlElementTagMatcher *, PyObject *);
__PYX_EXTERN_C DL_IMPORT(xmlNs) *findOrBuildNodeNsPrefix(struct LxmlDocument *, xmlNode *, const xmlChar *, const xmlChar *);

#endif /* !__PYX_HAVE_API__lxml__etree */

#if PY_MAJOR_VERSION < 3
PyMODINIT_FUNC initetree(void);
#else
PyMODINIT_FUNC PyInit_etree(void);
#endif

#endif /* !__PYX_HAVE__lxml__etree */
