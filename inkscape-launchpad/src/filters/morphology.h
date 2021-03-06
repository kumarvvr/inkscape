/** \file
 * @brief SVG morphology filter effect
 *//*
 * Authors:
 *   Hugo Rodrigues <haa.rodrigues@gmail.com>
 *
 * Copyright (C) 2006 Hugo Rodrigues
 *
 * Released under GNU GPL, read the file 'COPYING' for more information
 */

#ifndef SP_FEMORPHOLOGY_H_SEEN
#define SP_FEMORPHOLOGY_H_SEEN

#include "sp-filter-primitive.h"
#include "number-opt-number.h"
#include "display/nr-filter-morphology.h"

#define SP_FEMORPHOLOGY(obj) (dynamic_cast<SPFeMorphology*>((SPObject*)obj))
#define SP_IS_FEMORPHOLOGY(obj) (dynamic_cast<const SPFeMorphology*>((SPObject*)obj) != NULL)

class SPFeMorphology : public SPFilterPrimitive {
public:
	SPFeMorphology();
	virtual ~SPFeMorphology();

    Inkscape::Filters::FilterMorphologyOperator Operator;
    NumberOptNumber radius;

protected:
	virtual void build(SPDocument* doc, Inkscape::XML::Node* repr);
	virtual void release();

	virtual void set(unsigned int key, const gchar* value);

	virtual void update(SPCtx* ctx, unsigned int flags);

	virtual Inkscape::XML::Node* write(Inkscape::XML::Document* doc, Inkscape::XML::Node* repr, guint flags);

	virtual void build_renderer(Inkscape::Filters::Filter* filter);
};

#endif /* !SP_FEMORPHOLOGY_H_SEEN */

/*
  Local Variables:
  mode:c++
  c-file-style:"stroustrup"
  c-file-offsets:((innamespace . 0)(inline-open . 0)(case-label . +))
  indent-tabs-mode:nil
  fill-column:99
  End:
*/
// vim: filetype=cpp:expandtab:shiftwidth=4:tabstop=8:softtabstop=4:fileencoding=utf-8:textwidth=99 :
