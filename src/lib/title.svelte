<script>
    export let title = "This is a title"
</script>

<div class="title">
    <img src="/tree.webp" alt="site logo">
    <h1>{title}</h1>
</div>

<style>
    .title {
        display: flex;
        align-items: center;
        justify-content: center;
    }

    .title img{
        height: 5%;
        width: 5%;
        margin-right: 10px;
    }
</style>