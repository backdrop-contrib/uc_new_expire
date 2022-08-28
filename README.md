Ubercart New Expiration
=======================

This module implements user-controllable expiration of an Ubercart taxonomy term
(typically, "New Product"). The module removes the term from any product older
than a specified number of days.

The use case this supports is one where you assign a catalog term "New Products"
to new products (so that, for example, they show up in their own featured
section of the catalog) but you want that assignment to expire after a set
period of time. This module takes care of that.

Installation
------------

- Install this module using [the official Backdrop CMS instructions](https://backdropcms.org/guide/modules).

- Visit the configuration page under Administration > Store > Settings >
  New expiration (admin/store/settings/new-expire) and select the catalog taxonomy term that
is due to expire and the expiration length. For any product, the term will be
removed after the specified time has elapsed.

Issues
------

Bugs and feature requests should be reported in [the issue queue](https://github.com/backdrop-contrib/uc_new_expire/issues).

Current Maintainers
-------------------

- [Robert J. Lang](https://github.com/bugfolder)

Credits
-------

- Ported to Backdrop CMS by [Robert J. Lang](https://github.com/bugfolder).
- Originally written for Drupal by [Robert J. Lang](https://github.com/bugfolder) for OrigamiUSA.

License
-------

This project is GPL v2 software.
See the LICENSE.txt file in this directory for complete text.
