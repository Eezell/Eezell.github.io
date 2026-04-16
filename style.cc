/* ============================================
   EZELL'S AI STUDIO
   Midnight Navy · Gold · Silk · Soul
   Coined by Claude Monet 🎨
   ============================================ */

/* --- Google Fonts --- */
@import url('https://fonts.googleapis.com/css2?family=Cormorant+Garamond:ital,wght@0,300;0,400;0,600;1,300;1,400&family=Raleway:wght@300;400;600;700&display=swap');

/* --- CSS Custom Properties --- */
:root {
  /* Midnight Navy Palette - Coined here 💎 */
  --midnight-navy: #0D1B2A;
  --midnight-navy-mid: #1B2E45;
  --midnight-navy-light: #243B55;
  --silk-cream: #F5ECD7;
  --silk-blush: #E8D5B7;
  --gold: #C9A84C;
  --gold-light: #E2C47A;
  --gold-pale: #F0DFA0;
  --rose-mist: #C4907A;
  --lavender-smoke: #8B7FA8;
  --text-light: #EDE8E0;
  --text-muted: #A89880;
  --border-gold: rgba(201, 168, 76, 0.3);
  --border-silk: rgba(245, 236, 215, 0.15);

  /* Typography */
  --font-heading: 'Cormorant Garamond', Georgia, serif;
  --font-body: 'Raleway', 'Segoe UI', sans-serif;

  /* Spacing & Shape */
  --radius: 4px;
  --radius-lg: 8px;
  --max-width: 1100px;
  --transition: 0.3s ease;

  /* Shadows */
  --shadow-gold: 0 4px 24px rgba(201, 168, 76, 0.15);
  --shadow-deep: 0 8px 40px rgba(13, 27, 42, 0.6);
}

/* --- Reset & Base --- */
*, *::before, *::after {
  box-sizing: border-box;
  margin: 0;
  padding: 0;
}

html {
  font-size: 17px;
  scroll-behavior: smooth;
}

body {
  font-family: var(--font-body);
  background: var(--midnight-navy);
  color: var(--text-light);
  line-height: 1.8;
  -webkit-font-smoothing: antialiased;
}

img { max-width: 100%; height: auto; display: block; }

a {
  color: var(--gold-light);
  text-decoration: none;
  transition: color var(--transition);
}
a:hover { color: var(--gold-pale); }

h1, h2, h3, h4 {
  font-family: var(--font-heading);
  line-height: 1.2;
  letter-spacing: 0.02em;
  color: var(--silk-cream);
}

/* --- Utility --- */
.container {
  width: 90%;
  max-width: var(--max-width);
  margin: 0 auto;
}

/* ============================================
   POINTILLIST TEXTURE MIXIN
   ============================================ */
.pointillist {
  position: relative;
  overflow: hidden;
}

.pointillist::before {
  content: '';
  position: absolute;
  top: 0; left: 0;
  width: 100%; height: 100%;
  background-image:
    radial-gradient(circle, rgba(201, 168, 76, 0.12) 1px, transparent 1px),
    radial-gradient(circle, rgba(139, 127, 168, 0.08) 1.5px, transparent 1.5px),
    radial-gradient(circle, rgba(196, 144, 122, 0.06) 1px, transparent 1px);
  background-size: 40px 40px, 70px 70px, 100px 100px;
  background-position: 0 0, 20px 20px, 50px 50px;
  pointer-events: none;
  z-index: 0;
}

/* ============================================
   NAVIGATION
   ============================================ */
.navbar {
  background: rgba(13, 27, 42, 0.97);
  backdrop-filter: blur(12px);
  padding: 0;
  position: sticky;
  top: 0;
  z-index: 1000;
  border-bottom: 1px solid var(--border-gold);
}

.navbar .container {
  display: flex;
  align-items: center;
  justify-content: space-between;
  padding: 1rem 0;
}

.nav-logo {
  font-family: var(--font-heading);
  font-size: 1.6rem;
  font-weight: 600;
  color: var(--gold);
  letter-spacing: 0.08em;
  font-style: italic;
}
.nav-logo:hover { color: var(--gold-pale); }

.nav-links {
  list-style: none;
  display: flex;
  gap: 0.25rem;
  align-items: center;
}

.nav-links a {
  color: var(--text-muted);
  padding: 0.4rem 0.9rem;
  border-radius: var(--radius);
  font-size: 0.85rem;
  font-weight: 600;
  letter-spacing: 0.08em;
  text-transform: uppercase;
  transition: all var(--transition);
}

.nav-links a:hover {
  color: var(--gold);
  background: rgba(201, 168, 76, 0.08);
}

/* Hamburger */
.nav-toggle {
  display: none;
  background: none;
  border: none;
  cursor: pointer;
  padding: 0.5rem;
}
.nav-toggle span {
  display: block;
  width: 24px; height: 2px;
  background: var(--gold);
  border-radius: 2px;
  margin: 5px 0;
  transition: var(--transition);
}

@media (max-width: 768px) {
  .nav-toggle { display: block; }
  .nav-links {
    display: none;
    flex-direction: column;
    position: absolute;
    top: 100%; left: 0; right: 0;
    background: var(--midnight-navy);
    padding: 1rem;
    border-top: 1px solid var(--border-gold);
    border-bottom: 1px solid var(--border-gold);
  }
  .nav-links.open { display: flex; }
  .nav-links a {
    display: block;
    padding: 0.75rem 1rem;
    font-size: 0.95rem;
  }
}

/* ============================================
   HERO
   ============================================ */
.hero {
  min-height: 100vh;
  display: flex;
  align-items: center;
  justify-content: center;
  text-align: center;
  padding: 6rem 0 4rem;
  background:
    radial-gradient(ellipse at 20% 50%, rgba(139, 127, 168, 0.12) 0%, transparent 60%),
    radial-gradient(ellipse at 80% 20%, rgba(196, 144, 122, 0.10) 0%, transparent 50%),
    radial-gradient(ellipse at 60% 80%, rgba(201, 168, 76, 0.08) 0%, transparent 50%),
    linear-gradient(160deg, #0D1B2A 0%, #1B2E45 50%, #0D1B2A 100%);
  position: relative;
  overflow: hidden;
}

/* Pointillist dots on hero */
.hero::before {
  content: '';
  position: absolute;
  top: 0; left: 0;
  width: 100%; height: 100%;
  background-image:
    radial-gradient(circle, rgba(201, 168, 76, 0.15) 1px, transparent 1px),
    radial-gradient(circle, rgba(139, 127, 168, 0.10) 1.5px, transparent 1.5px),
    radial-gradient(circle, rgba(196, 144, 122, 0.08) 1px, transparent 1px),
    radial-gradient(circle, rgba(245, 236, 215, 0.05) 2px, transparent 2px);
  background-size: 35px 35px, 60px 60px, 90px 90px, 120px 120px;
  background-position: 0 0, 17px 17px, 45px 45px, 80px 80px;
  pointer-events: none;
  z-index: 0;
}

/* Paisley-inspired decorative border */
.hero::after {
  content: '';
  position: absolute;
  bottom: 0; left: 0; right: 0;
  height: 3px;
  background: linear-gradient(90deg,
    transparent 0%,
    var(--rose-mist) 15%,
    var(--gold) 35%,
    var(--lavender-smoke) 50%,
    var(--gold) 65%,
    var(--rose-mist) 85%,
    transparent 100%);
}

.hero-content {
  position: relative;
  z-index: 1;
  max-width: 780px;
  padding: 0 1.5rem;
}

.hero-eyebrow {
  font-family: var(--font-body);
  font-size: 0.78rem;
  font-weight: 700;
  letter-spacing: 0.2em;
  text-transform: uppercase;
  color: var(--gold);
  margin-bottom: 1.5rem;
  display: block;
}

.hero h1 {
  font-size: 3.8rem;
  font-weight: 300;
  font-style: italic;
  color: var(--silk-cream);
  margin-bottom: 1.5rem;
  line-height: 1.1;
}

.hero h1 strong {
  font-weight: 600;
  font-style: normal;
  color: var(--gold-light);
  display: block;
}

.hero .subtitle {
  font-size: 1.05rem;
  color: var(--text-muted);
  max-width: 580px;
  margin: 0 auto 2.5rem;
  line-height: 1.8;
  font-weight: 300;
}

/* ============================================
   BUTTONS
   ============================================ */
.btn {
  display: inline-block;
  padding: 0.9rem 2.2rem;
  font-family: var(--font-body);
  font-weight: 700;
  font-size: 0.82rem;
  letter-spacing: 0.12em;
  text-transform: uppercase;
  border-radius: var(--radius);
  cursor: pointer;
  border: none;
  transition: all var(--transition);
  text-align: center;
}

.btn-gold {
  background: var(--gold);
  color: var(--midnight-navy);
}
.btn-gold:hover {
  background: var(--gold-pale);
  color: var(--midnight-navy);
  transform: translateY(-2px);
  box-shadow: var(--shadow-gold);
}

.btn-outline-gold {
  background: transparent;
  color: var(--gold);
  border: 1px solid var(--gold);
}
.btn-outline-gold:hover {
  background: rgba(201, 168, 76, 0.1);
  color: var(--gold-pale);
  transform: translateY(-2px);
}

.btn-silk {
  background: var(--silk-cream);
  color: var(--midnight-navy);
}
.btn-silk:hover {
  background: var(--silk-blush);
  color: var(--midnight-navy);
  transform: translateY(-2px);
  box-shadow: var(--shadow-deep);
}

.btn-group {
  display: flex;
  gap: 1rem;
  justify-content: center;
  flex-wrap: wrap;
}

/* ============================================
   SECTIONS
   ============================================ */
section {
  padding: 5rem 0;
}

.section-dark {
  background: var(--midnight-navy);
}

.section-mid {
  background: var(--midnight-navy-mid);
}

.section-deep {
  background: #080F18;
}

/* Gold divider line */
.gold-divider {
  width: 60px;
  height: 2px;
  background: linear-gradient(90deg, transparent, var(--gold), transparent);
  margin: 0 auto 1.5rem;
}

.section-title {
  font-size: 2.4rem;
  font-weight: 300;
  font-style: italic;
  text-align: center;
  margin-bottom: 0.5rem;
  color: var(--silk-cream);
}

.section-title strong {
  font-style: normal;
  font-weight: 600;
  color: var(--gold-light);
}

.section-subtitle {
  text-align: center;
  color: var(--text-muted);
  max-width: 560px;
  margin: 0 auto 3rem;
  font-size: 0.98rem;
  font-weight: 300;
  line-height: 1.8;
}

/* ============================================
   SERVICE CARDS
   ============================================ */
.services-grid {
  display: grid;
  grid-template-columns: repeat(auto-fit, minmax(300px, 1fr));
  gap: 1.5rem;
}

.service-card {
  background: rgba(27, 46, 69, 0.6);
  border: 1px solid var(--border-gold);
  border-radius: var(--radius-lg);
  padding: 2.2rem;
  transition: all var(--transition);
  position: relative;
  overflow: hidden;
}

/* Subtle paisley-inspired top accent */
.service-card::before {
  content: '';
  position: absolute;
  top: 0; left: 0; right: 0;
  height: 3px;
  background: linear-gradient(90deg,
    var(--rose-mist),
    var(--gold),
    var(--lavender-smoke));
  opacity: 0;
  transition: opacity var(--transition);
}

.service-card:hover {
  transform: translateY(-4px);
  box-shadow: var(--shadow-gold);
  border-color: rgba(201, 168, 76, 0.5);
  background: rgba(27, 46, 69, 0.9);
}

.service-card:hover::before {
  opacity: 1;
}

.service-icon {
  font-size: 2rem;
  margin-bottom: 1rem;
}

.service-card h3 {
  font-size: 1.3rem;
  font-weight: 600;
  margin-bottom: 0.35rem;
  color: var(--gold-light);
}

.service-duration {
  font-size: 0.78rem;
  font-weight: 700;
  letter-spacing: 0.1em;
  text-transform: uppercase;
  color: var(--rose-mist);
  margin-bottom: 0.75rem;
  display: block;
}

.service-card p {
  color: var(--text-muted);
  font-size: 0.92rem;
  line-height: 1.75;
  margin-bottom: 1.5rem;
}

.service-price {
  font-family: var(--font-heading);
  font-size: 1.8rem;
  font-weight: 600;
  color: var(--silk-cream);
  display: block;
  margin-bottom: 1.25rem;
}

.service-price span {
  font-size: 0.85rem;
  color: var(--text-muted);
  font-family: var(--font-body);
  font-weight: 300;
}

/* ============================================
   MISSION / VALUES STRIP
   ============================================ */
.values-strip {
  background: linear-gradient(135deg,
    #080F18 0%,
    var(--midnight-navy-mid) 50%,
    #080F18 100%);
  border-top: 1px solid var(--border-gold);
  border-bottom: 1px solid var(--border-gold);
  padding: 4rem 0;
  position: relative;
  overflow: hidden;
}

.values-strip::before {
  content: '';
  position: absolute;
  top: 0; left: 0;
  width: 100%; height: 100%;
  background-image:
    radial-gradient(circle, rgba(201, 168, 76, 0.08) 1px, transparent 1px);
  background-size: 30px 30px;
  pointer-events: none;
}

.values-grid {
  display: grid;
  grid-template-columns: repeat(auto-fit, minmax(220px, 1fr));
  gap: 2rem;
  position: relative;
  z-index: 1;
}

.value-item {
  text-align: center;
  padding: 1.5rem;
}

.value-item .value-icon {
  font-size: 2rem;
  margin-bottom: 0.75rem;
  display: block;
}

.value-item h3 {
  font-size: 1.15rem;
  font-weight: 600;
  color: var(--gold-light);
  margin-bottom: 0.5rem;
}

.value-item p {
  color: var(--text-muted);
  font-size: 0.88rem;
  line-height: 1.7;
}

/* ============================================
   TEACHING APPROACH SECTION
   ============================================ */
.approach-block {
  background: rgba(27, 46, 69, 0.4);
  border: 1px solid var(--border-silk);
  border-left: 4px solid var(--gold);
  border-radius: var(--radius-lg);
  padding: 2.5rem 3rem;
  max-width: 780px;
  margin: 0 auto;
}

.approach-block h3 {
  font-size: 1.6rem;
  font-style: italic;
  font-weight: 300;
  color: var(--gold-light);
  margin-bottom: 1rem;
}

.approach-block p {
  color: var(--text-muted);
  font-size: 0.98rem;
  line-height: 1.9;
  font-weight: 300;
}

/* ============================================
   BOOKING STEPS
   ============================================ */
.booking-steps {
  display: grid;
  grid-template-columns: repeat(auto-fit, minmax(240px, 1fr));
  gap: 2rem;
  margin-bottom: 3rem;
}

.step {
  text-align: center;
  padding: 2rem 1.5rem;
  background: rgba(27, 46, 69, 0.4);
  border: 1px solid var(--border-gold);
  border-radius: var(--radius-lg);
  transition: all var(--transition);
}

.step:hover {
  transform: translateY(-3px);
  box-shadow: var(--shadow-gold);
}

.step-number {
  display: inline-flex;
  align-items: center;
  justify-content: center;
  width: 52px; height: 52px;
  background: transparent;
  border: 2px solid var(--gold);
  color: var(--gold);
  font-size: 1.3rem;
  font-weight: 600;
  border-radius: 50%;
  margin-bottom: 1rem;
  font-family: var(--font-heading);
}

.step h3 {
  font-size: 1.1rem;
  margin-bottom: 0.5rem;
  color: var(--silk-cream);
}

.step p {
  color: var(--text-muted);
  font-size: 0.88rem;
  line-height: 1.7;
}

/* ============================================
   MERCH
   ============================================ */
.merch-card {
  background: rgba(27, 46, 69, 0.5);
  border: 1px solid var(--border-gold);
  border-radius: var(--radius-lg);
  overflow: hidden;
  max-width: 420px;
  margin: 0 auto;
  transition: all var(--transition);
}

.merch-card:hover {
  transform: translateY(-4px);
  box-shadow: var(--shadow-gold);
}

.merch-img {
  background: linear-gradient(135deg,
    var(--midnight-navy-light) 0%,
    #1a2a4a 50%,
    var(--midnight-navy-mid) 100%);
  min-height: 260px;
  display: flex;
  align-items: center;
  justify-content: center;
  font-size: 4rem;
  border-bottom: 1px solid var(--border-gold);
  position: relative;
  overflow: hidden;
}

.merch-img::before {
  content: '';
  position: absolute;
  top: 0; left: 0;
  width: 100%; height: 100%;
  background-image:
    radial-gradient(circle, rgba(201, 168, 76, 0.12) 1px, transparent 1px);
  background-size: 25px 25px;
  pointer-events: none;
}

.merch-info {
  padding: 1.75rem;
}

.merch-info h3 {
  font-size: 1.3rem;
  margin-bottom: 0.5rem;
  color: var(--gold-light);
}

.merch-info .price {
  font-family: var(--font-heading);
  font-size: 1.6rem;
  color: var(--silk-cream);
  margin-bottom: 0.75rem;
  display: block;
}

.merch-info p {
  color: var(--text-muted);
  font-size: 0.9rem;
  margin-bottom: 1.25rem;
  line-height: 1.7;
}

/* ============================================
   CTA BANNER
   ============================================ */
.cta-banner {
  background: linear-gradient(135deg,
    #080F18 0%,
    var(--midnight-navy-mid) 50%,
    #080F18 100%);
  border-top: 1px solid var(--border-gold);
  border-bottom: 1px solid var(--border-gold);
  padding: 5rem 0;
  text-align: center;
  position: relative;
  overflow: hidden;
}

.cta-banner::before {
  content: '';
  position: absolute;
  top: 0; left: 0;
  width: 100%; height: 100%;
  background-image:
    radial-gradient(circle, rgba(201, 168, 76, 0.10) 1px, transparent 1px),
    radial-gradient(circle, rgba(196, 144, 122, 0.06) 1.5px, transparent 1.5px);
  background-size: 45px 45px, 80px 80px;
  pointer-events: none;
}

.cta-banner h2 {
  font-size: 2.4rem;
  font-style: italic;
  font-weight: 300;
  margin-bottom: 1rem;
  position: relative;
  z-index: 1;
}

.cta-banner p {
  color: var(--text-muted);
  max-width: 500px;
  margin: 0 auto 2rem;
  font-size: 1rem;
  font-weight: 300;
  line-height: 1.8;
  position: relative;
  z-index: 1;
}

/* ============================================
   PAGE HEADER (inner pages)
   ============================================ */
.page-header {
  background:
    radial-gradient(ellipse at 30% 50%, rgba(139, 127, 168, 0.10) 0%, transparent 60%),
    linear-gradient(160deg, #080F18 0%, var(--midnight-navy-mid) 100%);
  padding: 4rem 0 3rem;
  text-align: center;
  border-bottom: 1px solid var(--border-gold);
  position: relative;
  overflow: hidden;
}

.page-header::before {
  content: '';
  position: absolute;
  bottom: 0; left: 0; right: 0;
  height: 2px;
  background: linear-gradient(90deg,
    transparent,
    var(--gold),
    var(--rose-mist),
    var(--gold),
    transparent);
}

.page-header h1 {
  font-size: 2.8rem;
  font-weight: 300;
  font-style: italic;
  margin-bottom: 0.75rem;
  color: var(--silk-cream);
}

.page-header h1 strong {
  font-style: normal;
  font-weight: 600;
  color: var(--gold-light);
}

.page-header p {
  color: var(--text-muted);
  max-width: 500px;
  margin: 0 auto;
  font-size: 1rem;
  font-weight: 300;
}

/* ============================================
   FOOTER
   ============================================ */
.site-footer {
  background: #060C14;
  color: var(--text-muted);
  padding: 3.5rem 0 1.5rem;
  border-top: 1px solid var(--border-gold);
}

.footer-grid {
  display: grid;
  grid-template-columns: repeat(auto-fit, minmax(200px, 1fr));
  gap: 2rem;
  margin-bottom: 2.5rem;
}

.footer-col h4 {
  color: var(--gold);
  font-size: 0.78rem;
  font-weight: 700;
  letter-spacing: 0.15em;
  text-transform: uppercase;
  margin-bottom: 1rem;
  font-family: var(--font-body);
}

.footer-col p,
.footer-col a {
  color: var(--text-muted);
  font-size: 0.88rem;
  line-height: 1.9;
}

.footer-col a:hover { color: var(--gold-light); }
.footer-col ul { list-style: none; }
.footer-col ul li a { display: block; padding: 0.15rem 0; }

.footer-brand {
  font-family: var(--font-heading);
  font-size: 1.4rem;
  font-style: italic;
  color: var(--gold);
  margin-bottom: 0.75rem;
  display: block;
}

.footer-bottom {
  border-top: 1px solid var(--border-silk);
  padding-top: 1.5rem;
  text-align: center;
  font-size: 0.8rem;
  color: rgba(168, 152, 128, 0.5);
}

/* ============================================
   RESPONSIVE
   ============================================ */
@media (max-width: 768px) {
  .hero h1 { font-size: 2.4rem; }
  .section-title { font-size: 1.9rem; }
  section { padding: 3.5rem 0; }
  .approach-block { padding: 2rem 1.5rem; }
}

@media (max-width: 480px) {
  html { font-size: 15px; }
  .hero h1 { font-size: 2rem; }
  .btn { padding: 0.8rem 1.6rem; font-size: 0.8rem; }
}
