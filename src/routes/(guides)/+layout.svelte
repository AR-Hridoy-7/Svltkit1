<script>
    import Title from "$lib/title.svelte";
    import '../../styles/global.css';
</script>

<header>
    <nav>
        <Title title = "This is guide title" /> 
        <div class="links">
            <a href="/">Home</a>
            <a href="/about">About</a>
            <a href="/guides">Guides</a>
        </div>
    </nav>
</header>

<main>
    <slot></slot>
</main>

<footer>
    <p>Copyright 2024 Bidcraft</p>
</footer>

<style>
    header, footer {
        display: flex;
        align-items: center;
        justify-content: center;
    }
    main {
        max-width: 960px;
        margin: 20px auto;
        text-align: center;
    }
</style>