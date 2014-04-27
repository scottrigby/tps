# TPS re-re considered

## Learning groups
- og
    - Creation permission
        - Anyone can make a learning group
        - Anyone can join a learning group
        - The person who made the group can assign roles
        - If people don't like the way the group is run they can start a new one
    - Roles
        - Users can be granted roles within the context of a group (to maintain
          an ethos of openness & fairness, the list of roles and their
          permissions will be defined site-wide)
            - Organizer (the person responsible for settling disputes between,
              or removing co-organizers. This is either the person who started
              the group or who was passed this role by the last organizer. This
              can be moderated by the site admins in case of a group dispute)
            - Co-organizer (a person helping to organize the learning group.
              Formerly "committee member")
            - Member (a person participating in, but not helping to organize,
              the group)
    - Fields
        - About (rather than separate "about" pages)
        - Guidelines (this is probably a good thing to encourage all groups to
          deliberate on and clarify. What does it mean to join this group?)

## Classes
- Class content type
    - Class state (instead of being set manually, these can be automatically set
      with state_machine and state_flow. Friendly messages per state - on screen
      and by email to author and subscribers!)
        - Proposed (default, until there is activity)
        - Active (there is activity! Comments, upcoming scheduled events)
        - Dormant (there has not been activity in {a globally configurable}
          number of days)
    - Creation permission
        - Anyone can add a class, and list in various groups they have joined
        - No more proposals to be policed/approved (see Class state above)
    - Involvement (user involvement types per class)
        - Proposed
        - Organizing (may be different people)
        - Following (clicked "Follow")
        - Discussed (commented)
        - Joined events (clicked "Yes" on event attendance)
    - Copying class ideas
        - Anyone can copy an existing class idea as a new class (this is an open
          curriculum model. Automatically copied classes will list the trail of
          attribution)
    - Relationships
        - Classes can be part of one or more learning groups, or none (if none,
          they are orphaned)
            - Question: should we enforce adding to a learning
              group? If the learning group is removed, the class would still be
              orphaned.

## Events
- Event content type
    - Relationships
        - Events can be part of classes, or not
        - Events can be part of learning groups, or not
        - Examples:
            - A class meeting
            - A learning group meeting
            - An international phone call between learning group organizers
            - An exhibition, a protest, or sit-in
    - People can express interest in a class, which can be internationalized
      easily if part of multiple learning groups

## Locations
- Re-usable location information to attach to events (maps, special
  instructions, house rules, secret knock, etc)
    - A community center
    - A library
    - A squat, etc

## Articles
- Standard Drupal Article content type
    - Relationships
        - Can be attached to learning groups
        - Can be attached to classes
        - Can be attached to events

## Views
- Note all these views should provide feeds, so other sites (for example, a
  learning group with an independent site) can aggregate specific info for
  automatically updated presentation elsewhere
- Classes
    - Exposed filters: learning group(s), tag(s), Class state
- Site-wide calendar (events)
    - Exposed filters: learning group(s), tag(s), date range, class(es)
- Group calendar (events)
    - Contextual filters: learning group
    - Exposed filters: tag(s), date range, class(es)
- Class calendar (events)
    - Contextual filters: class
    - Exposed filters: date range
- Group members
    - Contextual filters: current learning group
    - Info
        - User photo + name (don't make people hover to see)
        - Involvement: group role
- Class members
    - Contextual filters: involved in this class, or it's events
    - Info
        - User photo + name (don't make people hover to see)
        - Involvement (following, commented, joined events, organizer, proposed)
        - Learning groups (a list of groups the user is part of - rather than
          duplicating the user icon for every group they're in - and group role)
- Event attendees
    - Contextual filters: event (registered)
    - Info
        - User photo + name
        - Attended (yes, no, maybe)
        - Learning groups

## Email subscriptions, notifications, & commenting
- Per-Group / class / event
- mailcomment
- message stack
    - message
    - message_notify
        - flag integration (+Add me)
    - message_subscribe
- OR og_mailinglist
    - Has security implications (see d.o project page), but has automatic
      integration with http://www.mailgun.com/)

## Spam fighting
- honeypot
    - Should catch most spam bots, without punishing the user (no CAPTCHAs or
      waiting to be approved by a moderator)
- Community moderation (for the few bots that get through, or malicious humans)
    - Build with flag, views, rules, and state_flow
        - If admins agree a community moderated post should be unpublished, an
          email should automatically be sent to the author (notice), and to the
          user(s) who flagged it (thanks/encouragement)

## Other niceties
- Mobile first, responsive design (aurora + magic)
- joyride (give users info on how to use the site. Added to Drupal 8 core!)
- r4032login "Redirect 403 to User Login"
- A help forum (strictly moderated, only for answering questions about the site.
  The goal of this is to give an immediate outlet for frustration, increase
  confidence in the project, allow answers to be linkable/re-usable, and
  help people in a faster, more transparent, and community-oriented way)
- Simplify media (no more pasting inside WYSIWYG, as this is bad content
  strategy and confusing for people. Instead include a multiple-media field,
  displaying thumbnails of media in a predictable location on the page
- Simplify description options (CKEditor 4. Do allow blockquotes, headers, lists
  and strip divs and styles in favor of clear paragraphs)
- Use Drupal core Dashboard for group co-organizer help (or total_control "Total
  Control Admin Dashboard" for an extra fancy version of the same idea)
    - Group co-organizers should only be able to moderate content that's
      posted to their group: publish & unpublish state flow (with automated
      friendly messages to content owners). No delete option.
        - TODO: Keep tabs on the collaboration between state_flow and
          workbench_moderation.
    - Remove the Drupal core toolbar (instead site-wide admins should develop
      locally and push all changes through code, using admin_menu_toolbar or the
      admin toolbar of their choice. See below)

## Development workflow changes
- Speed up the site by disabling all developer tools on production (views_ui
  and other configuration UIs (all configurations should be done locally, and
  pushed through code)
- New GitHub repo, for fork & pull loveliness!
- New Pantheon account, for multi-dev workflow, and environment deployment bliss
